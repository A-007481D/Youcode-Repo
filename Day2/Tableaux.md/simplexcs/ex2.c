// Challenge 2 : Saisie et Affichage des Éléments

#include <stdio.h>



int main(){
    int n;
    printf("Entrez le nombres des elements : ");
    scanf("%d", &n);

    int T[n];
    for(int i = 0; i < n; i++)
    {
        printf("Entrez l'element: ");
        scanf("%d", &T[i]);
        printf("element %d = %d\n", i, T[i]);  
    }

    return 0;
}