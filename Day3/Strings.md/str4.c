// Challenge 4 : Comparaison de Chaînes
#include <stdio.h>
#include <string.h>

int main(){
    char x[40];
    char y[20];
    printf("entrez les chaines de caracteres : ");
    scanf("%s",&x);
    printf("entrez la deuxieme chaine de caractere : ");
    scanf("%s", &y);
    if (strcmp(x, y) == 0){
        printf("Les chaines de caracteres se sont egales!\n");
    } else {
         printf ("ne sont pas egales!");

    }

    return 0;
}