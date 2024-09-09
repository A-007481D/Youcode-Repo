// Challenge 2 : Structure avec Tableau

#include <stdio.h>
#include <string.h>

typedef struct{
    char nom[20];
    char prenom[20];
    int notes[10];
} Student;



int main(){

    Student std1;
    printf("entrez votre nom : ");
    scanf("%s", &std1.nom);
    printf("entrez votre prenom : ");
    scanf("%s", &std1.prenom);


        for(int i = 0; i < 4; i++){
        printf("entrez votre notes : ");
        scanf("%d", &std1.notes[i]);

        }
        printf("vous informations \nnom : %s, prenom : %s\n", std1.nom, std1.prenom);
        for(int j = 0; j < 4; j++ ){

            printf("%d\n", std1.notes[j]);
        }




    return 0;
}