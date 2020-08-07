#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int choix, nombreMystere;
  const int MIN = 0, MAX = 100;

  srand(time(NULL));
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

  printf("Le but du jeu est de deviner le nombre mystère entre 0 et 100\n");
  
  choix = -1;
  while(choix != nombreMystere){
    printf("Quel est le nombre mystère ?\n-> ");
    scanf("%d",&choix);

    if  (choix < nombreMystere){
      printf("C'est + !\n\n");
    }
    else if (choix > nombreMystere){
      printf("C'est - !\n\n");
    }
  }
  printf("Vous avez trouvé !\n"); 
  return 0;
}
