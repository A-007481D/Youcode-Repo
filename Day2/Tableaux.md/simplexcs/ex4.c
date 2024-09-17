// Challenge 4 : Trouver le Maximum

#include <stdio.h>


int main(){
    int n, maxVal;

    printf("Entrez le nombres des elements : ");
    scanf("%d", &n);
    int T[n];
    for(int i = 0; i < n; i++)
    {
        printf("Entrez l'element: ");
        scanf("%d", &T[i]);
    }
    maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxVal < T[i]) {
            maxVal = T[i];
        }
    }
    printf("le maximum nombre est:  %d\n ", maxVal);

    return 0;
}