#include <string.h>
#include <stdio.h>

#define max_contacts 100

typedef struct {
    char nom[50];
    char email[100];
    char telefon[50];
} Contact;

Contact contacts[max_contacts];
int counter = 0;

void Ajouter(){
    if (counter >= max_contacts){
        printf("Le maximum du contacts atteinte!");
    }

    printf("Entrez le nom : ");
    scanf("%s", contacts[counter].nom);
    printf("Entrez le numero de telefon: ");
    scanf("%s", contacts[counter].telefon);
    printf("ssssss");
    printf("Entrez l'email : ");
    scanf("%s", contacts[counter].email);
    printf("le contact '%s' a ete ajouté avec succés\n", contacts[counter].nom);
}

void Afficher(){

    for(int i = 0; i < counter; i++){
        printf("nom : %s | numeroTelefon : %s | email : %s\n",contacts[i].nom, contacts[i].telefon, contacts[i].email );

    }


}




int main(){
    int choix;

    do {
        printf("--- menu de l'application----\n\n");
        printf("1. Ajouter un contact\n2. Afficher les contacts\n3. Modifier un contact\n4. Rechercher un contact\n5. Supprimer un contact\n0. Quitter le programme\nEntrer votre choix : ");
        scanf("%d", &choix);

        switch (choix){
            case 1 : Ajouter(); counter++; break;
            case 2 : Afficher(); break;
            // case 3 : Modifier(); break;
            // case 4 : Rechercher(); break;
            // case 5 : Supprimer(); break;
             case 0:
                printf("Sortie.\n"); break;
            default:
                printf("Choix invalide\n");
        }
    } while (choix != 0);




    return 0;
}