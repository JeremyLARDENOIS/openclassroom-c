#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int choix, nombreMystere, essai;
  const int MIN = 0, MAX = 100;
  int nouvellepartie = 1; //boolean 

  srand(time(NULL));
  
  while (nouvellepartie){
    essai = 0;
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
  
    printf("Le but du jeu est de deviner le nombre mystère entre 0 et 100\n\n");
    
    choix = -1;
    while(choix != nombreMystere){
      printf("Quel est le nombre mystère ?\n-> ");
      scanf("%d",&choix);
      essai++;

      if  (choix < nombreMystere){
        printf("C'est + !\n\n");
      }
      else if (choix > nombreMystere){
        printf("C'est - !\n\n");
      }
    }
    printf("Vous avez trouvé en %d essai(s) !\n", essai); 

    printf("\nVoulez vous rejouer ?\n1 : Oui\n2 : Non\n-> ");
    scanf("%d",&choix);
    if (choix != 1){
      nouvellepartie = 0;
    } else {
      printf("################\n");
    }
  }
  return 0;
}
