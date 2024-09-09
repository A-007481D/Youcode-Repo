// Challenge 5 : Inversion de Chaîne
#include <stdio.h>
#include <string.h>

int main(){
    char x[40];
    printf("entrez les chaines de caracteres : ");
    scanf("%s",&x);
    strrev(x);
    printf("%s", x);

    return 0;
}