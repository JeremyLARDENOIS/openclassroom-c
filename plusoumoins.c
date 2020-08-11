#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int choix, nombreMystere, essai, nombreJoueurs = 1;
  const int MIN = 0, MAX = 100;
  int nouvellepartie = 1; //boolean 

  srand(time(NULL));
  
  while (nouvellepartie){
    essai = 0;
    
    printf("Le but du jeu est de deviner le nombre mystère entre 0 et 100\n\n");

    printf ("Combien de joueurs participeront ?\n1 : 1 joueur\n2 : 2 joeuurs\n-> ");
    scanf("%d",&nombreJoueurs);

    if (nombreJoueurs == 1) {
      nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    }
    else if (nombreJoueurs == 2) {
      printf("Le premier joueur choisi le nombre mystère et le deuxième essaie de le deviner. Le nombre mystère doit se situer entre 0 et 100. Quel sera le nombre mystère ?\n-> ");
      scanf("%d",&nombreMystere);
      system("clear");
    }
   
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
