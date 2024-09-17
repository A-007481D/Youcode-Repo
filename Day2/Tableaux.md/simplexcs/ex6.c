// Challenge 6 : Multiplication des Éléments

#include <stdio.h>

void tri(int Tab[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (Tab[i] > Tab[j]) 
            {
                int temp = Tab[i];
                Tab[i] = Tab[j];
                Tab[j] = temp;
            }
        }
    }
}

int main(){
    int size;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &size);

    int Tab[size];

    printf("Entrez les elements:\n");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &Tab[i]);
    }

    trier(Tab, size);

    printf("Tab trié en ordre croissant:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d\n", Tab[i]);
    }

    return 0;
}
