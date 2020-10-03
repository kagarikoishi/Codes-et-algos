#include <stdio.h>

  /*                                                       Programme K&R/118, version 1.4

  Ce programme doit remplacer certaines entrées qui peuvent poser problème comme \t par un espace ' '. Il s'agit de l'exercice n°1-18 du K&R :
  "Write a program to remove all trailing blanks and tabs from each line of input, and to delete entirely blank lines".
  La syntaxe utilisée est celle de Stroustrup pour un souci de lisibilité.

  Cette solution est probablement pas la plus optimisée, surtout avec ses chaînes de conditions. */

int main () {
    // Déclaration des variables locales.
    int c = 0;
    int countspace = 0;
    long nbChar = 0;

    while ((c = getchar()) != EOF) {

        if (c == '\t' || c == '\n' || c == '\r' || c == ' '){
            ++countspace;

            if (countspace >= 2) {
                ; // Null statement ; si il y a deux espaces, rien ne se passe (logique).
            }

            else {
                putchar(' ');
            }
        }

        // Ajoute un caractère.
        else {
            putchar(c);
            countspace = 0; // Vide le compteur d'espaces.
            ++nbChar;
        } // Dans tous les autres cas le caractère est imprimé tel quel et le nombre de caractères est incrémenté de 1.

    }
    printf ("\n\tCe texte contient %ld caractères\n", nbChar);
    return 0;
}
