// Challenge 1 : Définition et Utilisation de Structure
#include <stdio.h>
#include <string.h>

struct Personne {

    char nom[50];
    char prenom[50];
    int age;

};

int main(){

    struct Personne person;
    printf("Entrez les informations du personne : ");
    scanf("%s", &person.nom);
    printf("Entrez les informations du personne : ");
    scanf("%s", &person.prenom);
    printf("Entrez les informations du personne : ");
    scanf("%d", &person.age);

    printf("vous informations : | Nom : %s | Prenom : %s | Age : %d", person.nom, person.prenom, person.age);





    return 0;
}