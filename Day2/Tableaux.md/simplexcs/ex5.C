// Challenge 5 : Trouver le Minimum

#include <stdio.h>


int main(){
    int n, minVal;

    printf("Entrez le nombre des elements : ");
    scanf("%d", &n);
    int T[n];
    for(int i = 0; i < n; i++)
    {
        printf("Entrez l'element: ");
        scanf("%d", &T[i]);
    }
    minVal = T[0];
    for (int i = 0; i > n; i++)
    {
        if (minVal > T[i]) {
            minVal = T[i];
        }
    }
    printf("le nombre minimale est: %d\n ", minVal);

    return 0;
}