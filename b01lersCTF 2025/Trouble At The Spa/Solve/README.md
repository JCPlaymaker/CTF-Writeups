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

3. Test manuel en console :

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


