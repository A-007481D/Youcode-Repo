// Challenge 8 : Conversion en Minuscules
#include <stdio.h>
#include <string.h>

int main(){
    char x[40];
    printf("entrez les chaines de caracteres : ");
    scanf("%s",&x);
    strlwr(x);
    printf("%s", x);



    return 0;
}