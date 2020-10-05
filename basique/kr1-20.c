/*                                                       Programme K&R/120, version 01
    Il s'agit de l'exercice n°1-20 du K&R :
    Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
    Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?".

    Le nombre de tabulations est fixé ici à 5 espaces.
*/
#include <stdio.h>
#define MAXCHAR 1000
#define SPACE ' '
#define TABSIZE 5

int main (void) {
    // Déclaration des variables
    char text[MAXCHAR];
    int i, c, count = 0;
    // Substitution des tabulations par des espaces
    while ((c = getchar()) != EOF && c <= MAXCHAR){
        if (c == '\t') {
            for (i = 0; i < TABSIZE; i++){
                text[count] = SPACE;
                count++;
            }
        }
        else if (c != '\t') {
            text[count] = c;
            count++;
        }
        else {printf("Erreur critique. c=getchar() imput is broken.");}
    }
    //Impression du résultat.
    printf("\n");
    for (i=0; i < count; i++)
        printf("%c", text[i]);
    printf("\n");
}
