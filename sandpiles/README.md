# Sandpiles

## Description

Ce projet implémente la **somme de deux grilles de sable (sandpiles)** et leur **stabilisation** selon le modèle de Abelian sandpile.

Une sandpile est représentée par une **grille 3x3** d’entiers. Chaque case contient un certain nombre de grains de sable.

- Une **grille stable** : aucune case n’a plus de 3 grains.  
- Une **grille instable** : au moins une case contient 4 grains ou plus.  
- Le processus de **toppling** consiste à redistribuer les grains d’une case instable à ses voisins directs (haut, bas, gauche, droite).

---

## Fonctionnalités

1. **Addition des grilles** :  
   `grid1` += `grid2`.

2. **Vérification de stabilité** :  
   - La fonction `is_stable()` parcourt la grille et retourne `1` si stable, `0` sinon.

3. **Toppling (redistribution des grains)** :  
   - La fonction `topple()` réduit de 4 grains chaque case instable et distribue 1 grain à chaque voisin direct.  
   - Une **grille temporaire** est utilisée pour que tous les topplings soient appliqués simultanément.

4. **Stabilisation complète** :  
   - La fonction `sandpiles_sum()` additionne les grilles et applique des tours de toppling tant que la grille n’est pas stable.  
   - La grille est affichée avant chaque tour de toppling pour visualiser le processus.

---

## Organisation du code

- **`0-sandpiles.c`** : contient toutes les fonctions :  
  - `sandpiles_sum()`  
  - `is_stable()`  
  - `topple()`  
  - `print_grid()`  

- **`0-main.c`** : fichier de test qui initialise deux grilles, appelle `sandpiles_sum()` et affiche le résultat final.
