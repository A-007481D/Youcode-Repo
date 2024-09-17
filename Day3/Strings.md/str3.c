// Challenge 3 : Concaténation de Chaînes

#include <stdio.h>
#include <string.h>

int main(){
    char x[40];
    char y[20];
    printf ("entrez les chaines de caracteres : ");
    scanf("%s\n%s", x, y);
    strcat(x, y);
    printf("%s", x);
    
    return 0;
}