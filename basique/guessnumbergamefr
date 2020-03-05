#include <stdlib.h> // STandarD LIBrary
#include <stdio.h>  // STandarD Inputs/Outputs library
#include <time.h> //Invoquée pour pouvoir utiliser un générateur d'aléatoire.

/* 
################################################################################################
#########################################  ATTENTION  ##########################################
################################################################################################
## Le contenu de ce jeu est encore en déboguage : certains cas de la partie personnalisée ont ##
## montré que le nombre à deviner n'avait pas une valeur qui fait partie de l'étendue du      ##
## nombre aléatoire. Merci de votre attention, le créateur : mj@asda.com                      ##
################################################################################################
*/

int main (void) 
{
    srand(time(NULL));
    int max, min; // Min et max du nombre aléatoire à deviner
    int compteur = 0; // Compteur de tentatives pour trouver le nombre
    int choix = 0; //Choix est la variable qui permet de choisir une option du menu

    // Menu du jeu.

  printf("\n \n Bienvenue dans le jeu PLUS OU MOINS ! (c) \n \n \n");

    do // Fonction du menu qui permet de boucler en fonction du while.
    {
        // Index des modes de jeu.
        printf("Modes de jeu ------------------ Tapez un numéro pour choisir un mode. \n");
        printf("Jeu Arcade -- deux joueurs ........................................ 1 \n");
        printf("Jeu ordinaire : Facile ............................................ 2 \n");
        printf("Jeu ordinaire : Moyen ............................................. 3 \n");
        printf("Jeu ordinaire : Difficile ......................................... 4 \n");
        printf("Partie personnalisée .............................................. 5 \n \n");
        printf("Veuillez choisir un mode de jeu : ");
        scanf ("%d", &choix);
        switch (choix) // Réaction aux choix (et détermination de l'étendue du nombre à deviner)
        {
        
            case 1:
                printf(" \n \n Bienvenue dans le mode deux joueurs !");
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
                printf(" \n \n Nous n'avons pas compris votre choix, désolé.\n \n");
                printf(" \n \n Une boucle infinie va se programmer devant vos yeux !\n \n");
                do
                {
                   choix ++;
                   printf("\n Choix vaut %d \n",choix);
                   choix --;
                   choix --;
                   printf("\n Choix vaut %d \n",choix); 
                } while (choix > 3);
                break;
        }
    } while (choix > 5 || choix < 1);

    // Fin du menu. Initialisation / saisie du nombre à chercher et de la réponse du joueur.

    int guessnb = (rand() % (max - min + 1)/*valeur : de max à min (0)+1*/);
    int reponse = 0; // la valeur interactive du joueur (activé via scanf)
    if (choix == 1) //Le choix n°1 est la partie à deux joueurs, ou mode "arcade".
    {
        printf("Joueur 1, choisissez un nombre (entier)");
        scanf("%d",&guessnb); //Joueur 1 choisit la valeur du nb à deviner
        printf("/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n"); //Des sauts à la ligne pour cacher le nombre.
    }   
    // Algorithme de réponse au joueur (c'est pas bien compliqué à faire).
    do
    {
        compteur ++;
        printf("\n Le nombre est ? ");
        scanf("%d", &reponse);
        if (reponse < guessnb)
        {
            printf("\n Le nombre à deviner est plus grand que %d", reponse);
        }
        else
        {
            if (reponse == guessnb)
            {
                //rien, c'est juste pour éviter une ligne parasite
            }
            else
            {
                printf("\n Le nombre à deviner est plus petit que %d", reponse);
            }
        }
    } while (reponse != guessnb);
    
    printf("\n Vous avez trouvé le nombre, qui est %d en %d essais\n\n\n", guessnb, compteur);
    
    return 0;
}
