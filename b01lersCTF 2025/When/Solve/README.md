# When

## Description de l’épreuve

Le challenge "When" est une épreuve de type web/reversing. <br>
Le service cible était accessible à l’URL https://when.atreides.b01lersc.tf/gamble et attendait une requête HTTP avec un en-tête Date. <br>
L’objectif était d’envoyer une requête à un moment très spécifique — ou simulé comme tel — pour déclencher une réponse contenant le flag.

Aucune documentation n’était fournie. Le comportement du serveur restait inchangé pour la majorité des requêtes, renvoyant des messages neutres. Le but était de déterminer quand (d’où le nom du challenge) envoyer la requête.

Analyse des artefacts et identification des indices

Un script solve.py était fourni. Il contient une boucle de bruteforce sur un timestamp Unix (secondes depuis Epoch) qui teste des valeurs passées et futures par rapport à l’heure actuelle :
