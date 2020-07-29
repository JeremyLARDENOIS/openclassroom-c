# openclassroom-c

## Hello world

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
```

Toute instruction doit finir par un ;

## Les variables

### Une affaire de mémoire

En langage C, une variable est constituée de deux choses :

- une valeur : c'est le nombre qu'elle stocke, par exemple 5 ;

- un nom : c'est ce qui permet de la reconnaître. En programmant en C, on n'aura pas à retenir l'adresse mémoire : à la place, on va juste indiquer des noms de variables. C'est le compilateur qui fera la conversion entre le nom et l'adresse.

 Vous ne pouvez pas appeler une variable n'importe comment :

 - il ne peut y avoir que des minuscules, majuscules et des chiffres (abcABC012) ;

 - votre nom de variable doit commencer par une lettre ;

 - les espaces sont interdits. À la place, on peut utiliser le caractère « underscore » _ (qui ressemble à un trait de soulignement). C'est le seul caractère différent des lettres et chiffres autorisé ;

- vous n'avez pas le droit d'utiliser des accents (éàêetc.). (Dépend des compilateurs, évitez de préférence).

De plus, le langage C fait la différence entre les majuscules et les minuscules. Pour votre culture, sachez qu'on dit que c'est un langage qui « respecte la casse ».

|Nom du type|Minimum|Maximum|
|-|-|-|
|signed char|-127|127|
|int|-32 767|32767|
|long|-2 147 483 647|2 147 483 647|
|float|-1 x1037|1 x1037|
|double|-1 x1037|1 x1037|
|unsigned char|0|255|
|unsigned int|0|65 535|
|unsigned long|0|4 294 967 295|

### Déclarer une variable

```c
int nombreDeVies;
double sommeArgentRecue; 
unsigned int nombreDeLecteursEnTrainDeLireUnNomDeVariableUnPeuLong;
```

## Affecter une valeur à la variable

```c
nombreDeVies = 5;
```

Vous pouvez aussi déclarer une variable et l'affecter en une ligne de code

```c
int nombreDeVies = 5;
```

### Déclarer une constante

Il faut utiliser le mot `const` juste devant le type quand vous déclarez votre variable

```c
const int NOMBRE_DE_VIES_INITIALES = 5;
```

Ce n'est pas une obligation, mais par convention on écrit les noms des constantes entièrement en majuscules comme je viens de le faire là. Cela nous permet ainsi de distinguer facilement les constantes des variables. Notez qu'on utilise l'underscore _ à la place de l'espace

### Afficher le contenu d'une variable

Pour afficher le contenu d'une variable, il suffit de rajouter un symbole spécial.

|Format|Type attendu|
|-|-|
|"%d"|int|
|"%ld"|long|
|"%f"|float|
|"%f"|double|

Vous pouvez ainsi récupérer le contenu de plusieurs variables.

```c
printf("Vous avez %d vies et vous etes au niveau n° %d", nombreDeVies, niveau);
```

### Récupérer une saisie

```c
int age = 0;
scanf("%d", &age);
```

Attention, pour le type double, il faut utiliser `%lf`. Le & est très important.

### Les opérations de calcul

|Opération|Signe|
|-|-|
|Addition|+|
|Soustraction|-|
|Multiplication|*  |
|Division|/|
|Modulo|%|

#### Les raccourcis

```c
nombre++; //nombre += 1
nombre--; //nombre -= 1
nombre += 4; //nombre = nombre + 4
nombre -= 3; //nombre = nombre - 3
nombre *= 5; //nombre = nombre * 5
nombre /= 3; //nombre = nombre / 3
nombre %= 3; //nombre = nombre % 3
```

#### La bibliotèque mathématique

Pour inclure la bibliotèque mathématique, il faut rajouter la ligne de code suivante en haut du fichier.

```c
#include <math.h>
```

Voici quelques fonctions utilisables :

- fabs

> Cette fonction retourne la valeur absolue d'un nombre, c'est-à-dire |x| (c'est la notation mathématique).
La valeur absolue d'un nombre est sa valeur positive.

- ceil

> Cette fonction renvoie le premier nombre entier après le nombre décimal qu'on lui donne.

- floor

> C'est l'inverse de la fonction précédente : cette fois, elle renvoie l'entier directement en dessous.

- pow

> Cette fonction permet de calculer la puissance d'un nombre.

```c
pow(nombre, puissance);
```

- sqrt

> Cette fonction calcule la racine carrée d'un nombre. Elle renvoie un double

- sin, cos, tan

> Ce sont les trois fameuses fonctions utilisées en trigonométrie.
Le fonctionnement est le même, ces fonctions renvoient un double.

> Ces fonctions attendent une valeur en radians.

