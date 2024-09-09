// Challenge 2 : Saisie et Affichage des Éléments

#include <stdio.h>



int main(){
    int n;
    printf("Entrer le nombres des elements : ");
    scanf("%d", &n);

    int T[n];
    for(int i = 0; i < n; i++){
        printf("Entre l'element: ");
        scanf("%d", &T[i]);
        printf("element %d = %d\n", i, T[i]);  
    }

    return 0;
}