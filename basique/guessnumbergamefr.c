#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
################################################################################################
#########################################  ATTENTION  ##########################################
################################################################################################
## Le contenu de ce jeu est encore en déboguage : certains cas de la partie personnalisée ont ##
## montré que le nombre à deviner n'avait pas une valeur qui fait partie de l'étendue du      ##
## nombre aléatoire. Merci de votre attention, le créateur : mj@asda.com                      ##
############################################################################# Version 0.2 ######
*/
int main (void) {
    srand(time(NULL)); // Mise en route du générateur d'aléatoire.
    int max, min, compteur = 0, choix = 0; // Déclaration de variables.
    printf("\n \n Bienvenue dans Quel Est Le Nombre ?! (c) \n \n \n"); // Menu du jeu.
    do {
        printf("Modes de jeu ------------------ Tapez un numéro pour choisir un mode. \n");
        printf("Jeu Arcade -- deux joueurs ........................................ 1 \n");
        printf("Jeu ordinaire : Facile ............................................ 2 \n");
        printf("Jeu ordinaire : Moyen ............................................. 3 \n");
        printf("Jeu ordinaire : Difficile ......................................... 4 \n");
        printf("Partie personnalisée .............................................. 5 \n \n");
        printf("Veuillez choisir un mode de jeu : ");
        scanf ("%d", &choix);
        switch (choix) { // Réaction aux choix (et détermination de l'étendue du nombre à deviner)
            case 1:
                printf(" \n \n Bienvenue dans le mode deux joueurs !\n");
                break;
            case 2:
                printf(" \n \n Bienvenue dans le mode facile");
                min = 0;max = 100;
                break;
            case 3:
                printf(" \n \n Bienvenue dans le mode moyen");
                min = 0;max = 500;
                break;
            case 4:
                printf(" \n \n Bienvenue dans le mode difficile");
                min = 0;max = 1000;
                break;
            case 5: // Version personnalisée, avec saisie des valeurs min et max.
                printf(" \n \n Bienvenue dans le mode personnalisé");
                printf(" \n \n Choisissez la valeur minimale du nombre à trouver : ");
                scanf("%d", &min);
                printf(" \n \n Choisissez la valeur maximale du nombre à trouver : ");
                scanf("%d", &max);
                break;
            default:
                choix = 0; // Réinitialisation de choix à une valeur dans le domaine des entiers.
                printf(" \n \n Nous n'avons pas compris votre choix, désolé.\n \n");
                break;
        }
    } while (choix > 5 || choix < 1); // Boucle qui a lieu uniquement quand la réponse est incorrecte
    int guessnb = (rand() % (max - min + 1));
    int reponse = 0; // la valeur interactive du joueur (activé via scanf)
    if (choix == 1) { //Dans le choix 1 un joueur doit entrer une valeur que l'autre devra deviner !
        printf("\n\n\t Joueur 1, choisissez un nombre (entier) : ");
        scanf("%d",&guessnb);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); //Des sauts à la ligne pour cacher le nombre.
    }
    for (compteur=1; reponse != guessnb; compteur++) {
        printf("\n\t Quel est le nombre : ");
        scanf("%d", &reponse);
        if (reponse < guessnb) {
            printf("\n\tLe nombre à deviner est plus grand que %d\n", reponse);
        }
        else if (reponse > guessnb) {
            printf("\n\tLe nombre à deviner est plus petit que %d\n", reponse);
        }
        else {
            break;
        }
    }
    printf("\n\n\tVous avez trouvé le nombre, qui est %d en %d essais\n\n\n", guessnb, compteur);
    return 0;
}
