/*                                                       Programme K&R/118, version 1.7

  Ce programme doit remplacer certaines entrées qui peuvent poser problème comme \t par une espace ' '. Il s'agit de l'exercice n°1-18 du K&R :
  "Write a program to remove all trailing blanks and tabs from each line of input, and to delete entirely blank lines".
  La syntaxe utilisée est celle de Stroustrup pour un souci de lisibilité.
  Cette solution est probablement pas la plus optimisée, surtout avec ses chaînes de conditions. */
  
#include <stdio.h>
#define MAXCHAR 1000
int main (void) {
    // Déclaration des variables locales.
    char texte[MAXCHAR];
    int nbChar = 0, retval = 0, c = 0,countspace = 0, i = 0;
    // Transformation des caractères saisis en tableau
    while ((c = getchar()) != EOF && nbChar < MAXCHAR) {
        if (c == '\t' || c == '\n' || c == '\r' || c == ' '){
            ++countspace;
            if (countspace >= 2) {
                ; // Null statement ; si il y a deux espaces, rien ne se passe (logique).
            }
            else {
                texte[nbChar++] = ' ';
            }
        }
        // Ajoute un caractère.
        else {
            texte[nbChar++] = c;
            countspace = 0; // Vide le compteur d'espaces.
        }
    }
    //Impression du texte à l'écran
    while (i <= nbChar && i < MAXCHAR) {
        printf("%c", texte[i]);
        i++;
    }
    // Echec par dépassemement de la valeur maximale du tableau
    if (nbChar >= MAXCHAR){
        printf ("\n\tCe texte n'a pas pu être entièrement affiché\n");
        retval = 404;
    }
    return retval;// Echec par dépassemement de la valeur maximale du tableau
}
