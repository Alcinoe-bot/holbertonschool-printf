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

[Man page de _printf]

## Organigramme 

![Organigramme de _printf](https://github.com/JuliaCostaDeSousa/holbertonschool-printf/blob/main/Flowchart%20_printf.jpg)

## Description des fichiers

