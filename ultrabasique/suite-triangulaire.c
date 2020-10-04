#include <stdio.h>
#include <stdlib.h>
//C'est un peu rapide et sale comme code. C'est vraiment simple.
int main (void){
    int saisie, i, somme = 0;
    printf("\nVeuillez saisir un chifrre à énumérer : ");
    scanf("%d",&saisie); //Saisie de la valeur à énumérer
    printf("\n");
    for (i = 0; i <= saisie; i++){
            somme += i; // L'énumération est ajoutée à la somme
            if (i == saisie){ //Si l'énumération est égal à la saisie, il faut afficher le résultat.
                printf("%d = %d", i, somme); // affiche le dernier nombre de l'énumération et le total
                printf("\n");
            }
            else{ // Mais le reste du temps il suffit d'afficher "1 + "
                printf("%d + ", i);
            }
    } // Ce cycle s'arrête une fois que l'énumération arrive à la même valeur que la saisie
    printf ("\nLa somme de tous les entiers entre 0 et %d est %d \n\n\n\n", saisie, somme);
    return 0;
}
