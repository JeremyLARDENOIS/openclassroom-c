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

- asin, acos, atan

Ce sont les fonctions arc sinus, arc cosinus et arc tangente, d'autres fonctions de trigonométrie.
Elles s'utilisent de la même manière et renvoient un double.

- exp

> Cette fonction calcule l'exponentielle d'un nombre. Elle renvoie un double

- log

> Cette fonction calcule le logarithme népérien d'un nombre (que l'on note aussi « ln »).

- log10

> Cette fonction calcule le logarithme base 10 d'un nombre.

## Les conditions

> SI la variable vaut ça,
ALORS fais ceci.

```c
if (/* Votre condition */)
{
  // Instructions à exécuter si la condition est vraie
}
```

> SI la variable vaut ça,
ALORS fais ceci,
SINON fais cela.


```c
if (age >= 18) // Si l'âge est supérieur ou égal à 18
{
  printf ("Vous etes majeur !");
}
else // Sinon...
{
  printf ("Ah c'est bete, vous etes mineur !");
}
```

> SI la variable vaut ça ALORS fais ceci,
SINON SI la variable vaut ça ALORS fais ça,
SINON fais cela.

```c
if (age >= 18) // Si l'âge est supérieur ou égal à 18
{
  printf ("Vous etes majeur !");
}
else if ( age > 4 ) // Sinon, si l'âge est au moins supérieur à 4 
{
  printf ("Bon t'es pas trop jeune quand meme...");
}
else // Sinon...
{
  printf ("Aga gaa aga gaaa"); // Langage bébé, vous pouvez pas comprendre
}
```

### Plusieurs conditions à la fois

|Symbole|Signification|
|-|-|
|&&|ET|
|\|\||OU|
|!|NON|

### Les booléens

Les conditions peuvent etre remplacées par des nombres. En c, ce sont des entiers. 0 pour faux et le reste pour vrai (généralement 1). 

```c
if (1)
{
    printf("C'est vrai");
}
else
{
    printf("C'est faux");
}
```

> C'est vrai

```c
if (0)
{
    printf("C'est vrai");
}
else
{
    printf("C'est faux");
}
```

> C'est faux

En faites les tests que vous faites renvoient une valeur, soit 0 soit 1. On appelle ce type de variable un booléen. La valeur d'un booléen peut etre stockée dans une variable.

## Switch/case

On peut remplacer :

```c
if (age == 2)
{
    printf("Salut bebe !");
}
else if (age == 6)
{
    printf("Salut gamin !");
}
else if (age == 12)
{
    printf("Salut jeune !");
}
else if (age == 16)
{
    printf("Salut ado !");
}
else if (age == 18)
{
    printf("Salut adulte !");
}
else if (age == 68)
{
    printf("Salut papy !");
}
else
{
    printf("Je n'ai aucune phrase de prete pour ton age");
}
```

par :

```c
switch (age)
{
case 2:
  printf("Salut bebe !");
  break;
case 6:
  printf("Salut gamin !");
  break;
case 12:
  printf("Salut jeune !");
  break;
case 16:
  printf("Salut ado !");
  break;
case 18:
  printf("Salut adulte !");
  break;
case 68:
  printf("Salut papy !");
  break;
default:
  printf("Je n'ai aucune phrase de prete pour ton age  ");
  break;
}
```

### Les conditions ternaires

On peut remplacer ceci :

```c
if (majeur)

  age = 18;

else

  age = 17;
```

par : 

```c
age = (majeur) ? 18 : 17;
```

`age` vaudra 18 si `majeur` est vrai (égal à 1 ou autre) et 17 si `majeur` est faux (égal à 0)

## Les boucles

Une boucle est une structure qui permet de répéter les mêmes instructions plusieurs fois.

Il existe 3 types de boucles courantes en C :
- while
- do… while
- for

### La boucle while

`while` signifie « Tant que ». On dit donc à l'ordinateur « Tant que la condition est vraie, répète les instructions entre accolades 

```c
while (/* Condition */)
{
    // Instructions à répéter
}
```

### La boucle do...while

Ce type de boucle est très similaire à `while`, bien qu'un peu moins utilisé en général.

La seule chose qui change en fait par rapport à `while`, c'est la position de la condition. Au lieu d'être au début de la boucle, la condition est à la fin :

```c
int compteur = 0;

do
{
    printf("Salut les Zeros !\n");
    compteur++;
} while (compteur < 10);
```

**NE PAS OUBLIER LE `;` DE FIN !**

### La boucle for

La boucle for est aussi très utlisé. Dans les parenthèses, on a :
   
- La première est l'initialisation : cette première instruction est utilisée pour préparer notre variablecompteur. Dans notre cas, on initialise la variable à 0.

- La seconde est la condition : comme pour la bouclewhile, c'est la condition qui dit si la boucle doit être répétée ou non. Tant que la condition est vraie, la boucleforcontinue.

- Enfin, il y a l'incrémentation : cette dernière instruction est exécutée à la fin de chaque tour de boucle pour mettre à jour la variablecompteur. La quasi-totalité du temps on fera une incrémentation, mais on peut aussi faire une décrémentation (variable--) ou encore n'importe quelle autre opération (variable += 2;pour avancer de 2 en 2 par exemple).

```c
int compteur;


for (compteur = 0 ; compteur < 10 ; compteur++)

{

    printf("Hello world !\n");

}
```
