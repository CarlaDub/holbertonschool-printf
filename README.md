# Projet printf

## Description du projet et de la fonction printf

### Fonctions et conversions de print_chars.c

Le fichier `print_chars.c` contient trois fonctions permettant de gérer les conversions de la tâche 0.

| Fonction | Format | Description | Exemple | Retour |
|---|---|---|---|---|
| `print_char` | `%c` | Affiche un seul caractère | A | 1 |
| `print_string` | `%s` | Affiche une chaîne de caractères | Bonjour | 7 |
| `print_percent` | `%%` | Affiche le symbole pourcentage | % | 1 |

#### Fonctionnement

- `_putchar` permet d'afficher les caractères sur la sortie standard (STDOUT).
- `va_arg` permet de récupérer les arguments pour `%c` et `%s`.
- Le format `%%` ne nécessite aucun argument.
- La boucle `while` permet de parcourir une chaîne jusqu'au caractère de fin `\0`.

Chaque fonction retourne le nombre de caractères affichés en cas de réussite.

## Compilation

## Requirements

## Des exemples d'utilisation de la fonction _printf (code snippets / screenshots…) avec le résultat en STDOUT

## Man page

## Testing

## Flowchart