# Push Swap

Ce projet est une implémentation du jeu de tri "Push Swap", réalisé dans le cadre de l'école 42. L'objectif de ce projet est de trier une pile d'entiers dans un ordre croissant en utilisant un ensemble de règles spécifiques pour manipuler les piles.

### Language : ![C language](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
### Règles du jeu
Le jeu de tri "Push Swap" consiste à trier une pile d'entiers à l'aide de deux piles et un ensemble de règles de manipulation. Voici les règles de base :

* On dispose de deux piles, nommées A et B.
* Au début, A contient un certain nombre d'entiers désordonnés, et B est vide.
* L'objectif est de trier les entiers de la pile A dans l'ordre croissant en utilisant uniquement les opérations suivantes :
  * sa : échanger les deux premiers éléments de la pile A.
  * sb : échanger les deux premiers éléments de la pile B.
  * ss : effectuer sa et sb simultanément.
  * pa : déplacer le premier élément de la pile B au début de la pile A.
  * pb : déplacer le premier élément de la pile A au début de la pile B.
  * ra : faire une rotation de la pile A vers le haut (le premier élément devient le dernier).
  * rb : faire une rotation de la pile B vers le haut (le premier élément devient le dernier).
  * rr : effectuer ra et rb simultanément.
  * rra : faire une rotation de la pile A vers le bas (le dernier élément devient le premier).
  * rrb : faire une rotation de la pile B vers le bas (le dernier élément devient le premier).
  * rrr : effectuer rra et rrb simultanément.

### Fonctionnalités
Ce projet comprend les fonctionnalités suivantes :

* Un programme push_swap qui prend en entrée une liste d'entiers non triés et affiche une série d'opérations permettant de trier la pile.
* Un programme checker qui prend en entrée une série d'opérations et une liste d'entiers, et vérifie si ces opérations permettent de trier la pile d'entiers correctement.
* Un ensemble de scripts de test pour évaluer la performance et la précision des programmes.

### Utilisation

#### Compilation
Pour compiler les programmes, exécutez la commande suivante :

```terminal
make
```

#### Utilisation de push_swap

Pour utiliser le programme push_swap, exécutez la commande suivante :

```bash
./push_swap [liste d'entiers]
```
où [liste d'entiers] est une liste d'entiers non triés séparés par des espaces.

#### Utilisation de checker
Pour utiliser le programme checker, exécutez la commande suivante :
*
```
ARG="[liste d'entiers]" ./checker [opérations]
```
où [liste d'entiers] est une liste d'entiers non triés séparés par des espaces, et [opérations] est une série d'opérations séparées par des espaces.

Exemple d'utilisation

```shell
$> ./push_swap 4 67 3 87
sa
rra
pb
rra
pa
$> ARG="4 67 3 87" ./checker sa rra pb rra pa
OK
```
#### help
[push swap visualizer](https://github.com/o-reo/push_swap_visualizer)
