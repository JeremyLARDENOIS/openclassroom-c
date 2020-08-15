#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <math.h>

int main(void) {
  int difficulte, choix, nombreMystere, essai, nombreJoueurs = 1, max;
  const int MIN = 0;
  int nouvellepartie = 1; //boolean 

  srand(time(NULL));
  
  while (nouvellepartie){
    essai = 0;
    
    printf("Le but du jeu est de deviner le nombre mystère \n\n");

    printf ("Quel sera le niveau de difficulté ?\n1 : Facile\n2 : Moyen\n3 : Difficile\n-> ");
    scanf("%d",&difficulte);

    //max = 100 + pow(10, difficulte);
    max = 100;
    for (int i = 1; i < difficulte; i ++){
        max *= 10;
    }

    printf ("Combien de joueurs participeront ?\n1 : 1 joueur\n2 : 2 joeurs\n-> ");
    scanf("%d",&nombreJoueurs);

    switch (nombreJoueurs) {
        case 1: 
            nombreMystere = (rand() % (max - MIN + 1)) + MIN;
            break;
        case 2: 
            printf("Le premier joueur choisi le nombre mystère et le deuxième essaie de le deviner. Le nombre mystère doit se situer entre 0 et %d. Quel sera le nombre mystère ?\n-> ",max);
            scanf("%d",&nombreMystere);
            system("clear");
            break;
    }
   
    printf ("Le nombre mystère se situe entre 0 et %d\n",max);
    do{
      printf("Quel est le nombre mystère ?\n-> ");
      scanf("%d",&choix);
      essai++;

      if  (choix < nombreMystere){
        printf("C'est + !\n\n");
      }
      else if (choix > nombreMystere){
        printf("C'est - !\n\n");
      }
    } while(choix != nombreMystere);
    printf("Vous avez trouvé en %d essai(s) !\n", essai); 

    printf("\nVoulez vous rejouer ?\n1 : Oui\n2 : Non\n-> ");
    scanf("%d",&choix);
    if (choix != 1){
      nouvellepartie = 0;
      printf("A bientot\n");
    } else {
      printf("################\n");
    }
  }
  return 0;
}
