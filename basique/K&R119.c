/*                                                       Programme K&R/119, version 24
    Il s'agit de l'exercice n°1-19 du K&R :
    "Write a function reverse(s) that reverses the character string s . Use it to write a program that reverses its input a line at a time".
    La ligne 26 est éhonteusement copiée de la solution de Richard Heathfield sur cet exercice dans le site clc-wiki. */
#include <stdio.h>
#define MAXCHAR 1000

int reverse (char s[]);
int cutline (char line[]);

int main (void) {
    char type[MAXCHAR];
    int i, c, count = 0;
    while ((c = getchar()) != EOF && c <= MAXCHAR && c != '\n'){
        type[count] = c;
        count++;
    }
    reverse(type);
    printf("\n");
    for (i = 0; i < count; i++)
        printf ("%c", type[i]);
    printf("\n");
    return 0;
}

int reverse (char s[]){
    int i, j, k;
    for (i = 0 ; s[i] != '\0'; i++)
        ;
    char rev[i];
    --i;
    k = i; //k est une pseudo-constante
    for (j = 0;j <= k; j++){
        rev[j] = s[i];
        i--;
    }
    for (i = 0; i <= k; i++)
        s[i] = rev[i];
    return 0;
}
