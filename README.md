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
