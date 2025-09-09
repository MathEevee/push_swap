# Push_swap

Création de son propre algorithme de tri. Nous devons procéder avec des "piles", la A et la B.

Nous avons aussi des coups restreints.

---

## 🚀 Lancer le programme

1. **Compiler** le programme :
   ```bash
   make
   ```
   (dans le dossier où se situe le `Makefile`)

2. **Exécuter** le serveur :
   ```bash
   1. ./push_swap "<list number>"
   
   ex : ./push_swap "5 8 4 3 7 9"

   2. ./push_swap <number> <number> <number> <number> <number> <number> etc...

   ex : ./push_swap 15 4 7 5 3 14 1
   ```

---

## 📝 Liste des mouvements


| Commande   | Description |
|------------|-------------|
| **sa**   | Interverti les deux éléments plus hauts de la pile A. |
| **sb**   | Interverti les deux éléments plus hauts de la pile B. |
| **ss**   | Interverti les deux éléments plus hauts de la pile A et B. |
| **pa**   | Envoi l'élément le plus haut de la pile B en haut de la pile A. |
| **pb**   | Envoi l'élément le plus haut de la pile A en haut de la pile B. |
| **ra**   | Tous les éléments de la pile A montent de 1 vers le haut. (L'élément le plus haut passe tout en bas de la pile A) |
| **rb**   | Tous les éléments de la pile B montent de 1 vers le haut. (L'élément le plus haut passe tout en bas de la pile B) |
| **rr**   | Tous les éléments de la pile A et B montent de 1 vers le haut. (L'élément le plus haut passe tout en bas) |
| **rra**  | Tous les éléments de la pile A descendent de 1 vers le bas. (L'élément le plus bas passe tout en haut de la pile A) |
| **rrb**  | Tous les éléments de la pile B descendent de 1 vers le bas. (L'élément le plus bas passe tout en haut de la pile B) |
| **rrr**  | Tous les éléments de la pile A et B descendent de 1 vers le bas. (L'élément le plus bas passe tout en haut) |

---

## 📖 Explications

Le programme prends en paramètre des nombres et va ressortir une liste de mouvements.

Exemple : 
<img width="275" height="238" alt="Screenshot from 2025-09-09 13-25-43" src="https://github.com/user-attachments/assets/653cefc6-f375-427e-8ca7-90b4ed5b278f" />



![Screencastfrom09-08-202502_52_22PMonline-video-cutter com-ezgif com-video-to-gif-converter](https://github.com/user-attachments/assets/34a6668b-001d-422e-a4dd-4b81ed32d7c9)
