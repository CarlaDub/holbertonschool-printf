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

### Fonctions et conversions de print_nums.c

Le fichier `print_nums.c` permet de gérer les conversions de la tâche 1.

| Fonction | Format | Description | Exemple | Retour |
|---|---|---|---|---|
| `print_nums` | `%d` | Affiche un nombre entier signé | 123 | 3 |
| `print_nums` | `%i` | Affiche un nombre entier signé | -123 | 4 |

#### Fonctionnement

- `va_arg` permet de récupérer un nombre entier.
- `num` stocke le nombre récupéré.
- Si le nombre est négatif, le signe `-` est affiché.
- `divisor` permet de récupérer les chiffres dans le bon ordre.
- La division `/` et le modulo `%` permettent de séparer les chiffres.
- `_putchar` permet d'afficher chaque caractère.
- `count` compte le nombre de caractères affichés.

La fonction retourne le nombre de caractères affichés en cas de réussite.

## Compilation

## Requirements

## Des exemples d'utilisation de la fonction _printf (code snippets / screenshots…) avec le résultat en STDOUT

## Man page

## Testing

## Flowchart
Ce diagramme représente le fonctionnement de la fonction `_printf`
et la gestion des conversions `%c`, `%s`, `%%`, `%d` et `%i`.

![Printf Flowchart](Projet%20printf.drawio.png)