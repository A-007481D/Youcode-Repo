// Challenge 3 : Somme des Éléments


#include <stdio.h>



int main(){
    int n;
    int somme = 0;

    printf("Entrer le nombres des elements : ");
    scanf("%d", &n);

    int T[n];
    for(int i = 0; i < n; i++){
        printf("Entre l'element: ");
        scanf("%d", &T[i]);
        somme += T[i];
    }
    printf("la somme des elements est : %d", somme);

    return 0;
}