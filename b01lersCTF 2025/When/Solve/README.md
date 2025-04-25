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

