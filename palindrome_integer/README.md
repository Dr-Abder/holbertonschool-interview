# Palindrome Integer

## Description
Ce projet contient une fonction qui vérifie si un entier non signé est un palindrome.

Un palindrome est un nombre qui se lit de la même façon de gauche à droite et de droite à gauche.
- Exemples : `121`, `1221`, `12321`

## Fichiers
- `palindrome.h` : Fichier header contenant le prototype de la fonction
- `0-is_palindrome.c` : Implémentation de la fonction `is_palindrome`
- `0-main.c` : Programme de test (fourni)

## Prototype
```c
int is_palindrome(unsigned long n);
```

### Paramètres
- `n` : Le nombre à vérifier

### Retour
- `1` si `n` est un palindrome
- `0` sinon

## Algorithme

L'algorithme inverse le nombre et le compare avec l'original :

1. **Sauvegarder** le nombre original
2. **Inverser le nombre** :
   - Extraire le dernier chiffre avec `n % 10`
   - Construire le nombre inversé : `reversed = reversed * 10 + dernier_chiffre`
   - Supprimer le dernier chiffre : `n = n / 10`
   - Répéter jusqu'à `n == 0`
3. **Comparer** le nombre original avec le nombre inversé

### Exemple avec 121
```
Tour 1: n=121, reversed=0 → dernier=1, reversed=1, n=12
Tour 2: n=12,  reversed=1 → dernier=2, reversed=12, n=1
Tour 3: n=1,   reversed=12 → dernier=1, reversed=121, n=0
Résultat: 121 == 121 → Palindrome ✓
```

## Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c
```

## Utilisation
```bash
./palindrome [nombre]
```

### Exemples
```bash
$ ./palindrome 121
121 is a palindrome.

$ ./palindrome 123
123 is not a palindrome.

$ ./palindrome 12345678987654321
12345678987654321 is a palindrome.
```

## Contraintes
- ✅ Pas d'allocation dynamique (malloc, calloc, etc.)
- ✅ Uniquement des opérations arithmétiques sur les nombres
- ✅ Pas de conversion en chaîne de caractères

## Repository
- **GitHub repository** : `holbertonschool-interview`
- **Directory** : `palindrome_integer`
- **Files** : `0-is_palindrome.c`, `palindrome.h`