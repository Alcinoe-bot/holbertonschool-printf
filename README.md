# _printf

## Description
Ce projet est une implémentation personnalisée de la fonction standard `printf` en C, qui gère les arguments variadiques et les spécificateurs de format personnalisés. Cette version imite le comportement de la fonction originale en prenant en charge divers spécificateurs de format pour afficher différents types de données.

## Exigences

* Éditeurs autorisés : `vi`, `vim`, `emacs`

* Compilé sur Ubuntu 20.04 LTS avec `gcc`

* Le code doit respecter le style Betty

* Pas de variables globales

* Pas plus de 5 fonctions par fichier

* Les prototypes de fonctions doivent être inclus dans `main.h`

# Limitations

Cette fonction `_printf` ne prend pas en charge : 

* les caractères de drapeau (flags)

* la largeur du champ (field width)

* la précision

* les modificateurs de longueur

## Prototype de fonction

`int _printf(const char *format, ...);`

## Spécificateurs de conversion pris en charge

| Spécificateur | Description           |
|--------------|----------------------|
| `%c`        | Affiche un caractère  |
| `%s`        | Affiche une chaîne de caractères |
| `%%`        | Affiche un pourcentage |
| `%d`        | Affiche un entier      |
| `%i`        | Affiche un entier      |

## Page de manuel

Voici le lien vers la page de manuel de la fonction `_printf` :

[Man page de _printf](https://github.com/Alcinoe-bot/holbertonschool-printf/blob/main/man_3_printf)

## Organigramme 

![Organigramme de _printf](file:///C:/Users/estel/Downloads/Diagramme%20de%20flux%20de%20donn%C3%A9es%20-%20Cadre%202.jpg)

## Description des fichiers

.

├── main.h                # Fichier d'en-tête contenant les prototypes de fonctions et les macros

├── _printf.c             # Fonction principale qui imite le comportement de printf

├── _strlen.c             # Fonction gérant la taille d'une chaîne de caractère

├── format_specifier.c    # Fonction gérant les %s, %c, %%, %i, %d

├── print_char.c          # Fonction gérant les caractères

├── print_string.c        # Fonction gérant les chaînes de caractères

├── print_modulo .c       # Fonction gérant les pourcentages

├── print_int.c           # Fonction gérant les entiers

├── _putchar.c            # Fonction d'affichage

├── README.md             # Documentation du projet

├── Flowchart _printf.jpg # Diagramme de flux de la fonction principale

└── man_3_printf          # Page man pour la fonction _printf
## Exemples

Si vous souhaitez tester `_printf`, vous pouvez copier les instructions ci-dessous dans un fichier nommé `main.c` dans le répertoire `holbertonschool-printf` après avoir cloné le dépôt (voir la section **"Installation"** ci-dessous).

```
#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    len = _printf("Caractere: [%c]\n", 'H');
    printf("Return Valeur: _printf = %d\n", len);

    len = _printf("String: [%s]\n", "Hello, world!");
    printf("Return Valeur: _printf = %d\n", len);

    len = _printf("Integer: [%d]\n", 1234);
    printf("Return Valeur: _printf = %d\n", len);

    return 0;
}
```
la sortie est:

```
Caractere: [H]
Return Valeur: _printf = 11
String: [Hello, world!]
Return Valeur: _printf = 15
Integer: [1234]
Return Valeur: _printf = 5
```

## Installation

Pour utiliser cette fonction printf personnalisée, suivez ces étapes :

* Clonez le dépôt
  `git clone https://github.com/JuliaCostaDeSousa/holbertonschool-printf.git`
* Allez dans le répertoire du projet
  `cd holbertonschool-printf`
* Copiez le fichier `main.c` depuis la section **"Exemples"** ci-dessus

Si vous souhaitez vérifier que le style de codage Betty est respecté, vous devez :

* Aller dans le dépôt Betty (https://github.com/hs-hq/Betty)

* Clonez le dépôt sur votre machine locale

* `cd` dans le répertoire Betty

* Installez le linter avec `sudo ./install.sh`

* `emacs` ou `vi` un nouveau fichier appelé `betty`, et copiez le script ci-dessous :
```
# Simplement un script wrapper pour vous éviter d'avoir à utiliser betty-style
# et betty-doc séparément sur chaque élément.
# Initialement créé par Tim Britton (@wintermanc3r), ajout d'arguments multiples par
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
Une fois enregistré, quittez le fichier et changez les permissions pour les appliquer à tous les utilisateurs avec `chmod a+x betty`

Déplacez le fichier betty dans le répertoire `/bin/` ou ailleurs dans votre `$PATH` avec `sudo mv betty /bin/`

Vous pouvez maintenant taper `betty <nom_de_fichier>` pour exécuter le linter Betty !


## Commande de compilation

Pour compiler, utilisez `gcc` avec la commande suivante :

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf`

Pour lancer l'exécutable, utilisez :
`./_printf`

## Auteur

**Alcinoe Romanelli**

* [Github](https://github.com/Alcinoe-bot)
