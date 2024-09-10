#include <stdio.h>
#include <string.h>
#define max_livres 100

typedef struct {
    char titre[20];
    char auteur[30]; 
    int prix;
    int quantite;

} Livre;

Livre livres[max_livres];
int counter = 0;


void ajouterunLivre(){

    printf("Entrez le titre du livre ");
    scanf(" %[^\n]", livres[counter].titre);
    printf("Entrez l'auteur du livre ");
    scanf(" %[^\n]", livres[counter].auteur);
    printf("Entrez la quantite du livre ");

    do {
        scanf("%d", &livres[counter].quantite);
        printf("Entrez le prix du livre ");
        scanf("%d", &livres[counter].quantite);
        printf("Livre '%s' a ete ajoute avec succés.\n", livres[counter].titre);

    } while(livres[counter].quantite <= 0);

    do {
        scanf("%d", &livres[counter].quantite);
        printf("Entrez le prix du livre ");
        scanf("%d", &livres[counter].prix);
        printf("Livre '%s' a ete ajoute avec succés.\n", livres[counter].titre);

    } while(livres[counter].prix <= 0);
    counter++;
}

void ajouterpluslivres(){
    int n;
    printf("Entrez le nombre de livres a ajouter : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
       ajouterunLivre();  
    }
}


void afficher(){
    if (counter == 0){
        printf("Aucun livre a afficher!\n");
        return;
    }

    printf("\nAffichage des livres:\n");
    for (int i = 0; i < counter; i++)
    {
        printf("Titre: %s  | Auteur: %s | Prix: %d | Quantité: %d |\n", livres[i].titre, livres[i].auteur, livres[i].prix, livres[i].quantite);
    }
}

void trier() {
    int choix;
    do {
        printf("\n--- Sous-menu de tri ---\n");
        printf("1 => Trier de A a Z\n");
        printf("2 => Trier de Z a A\n");
        printf("0 => Retour au menu principal\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        if (choix == 0) 
        return; 

        for (int i = 0; i < counter - 1; i++) {
            for (int j = 0; j < counter - i - 1; j++){
                if ((choix == 1 && strcmp(livres[j].titre, livres[j + 1].titre) > 0) || (choix == 2 && strcmp(livres[j].titre, livres[j + 1].titre) < 0)){
                    Livre temp = livres[j]; 
                    livres[j] = livres[j + 1];
                    livres[j + 1] = temp;
                }
            }
        }

        printf("\nLivres aprss triage:\n");
        afficher();

    } while(choix != 0);
}

 
void modifier() {
    afficher();
    if (counter == 0){
        printf("Aucun livre disponible pour modifier!\n");
        return;
    }
    char titre[20];
    printf("Entrez le titre du livre a modifier: ");
    scanf(" %[^\n]", titre);
    for (int i = 0; i < counter; i++) {
        if (strcmp(livres[i].titre, titre) == 0){ 
            printf("Livre trouvé: Titre: %s | Auteur: %s | Prix: %d | Quantité: %d\n",livres[i].titre, livres[i].auteur, livres[i].prix, livres[i].quantite);

            int choix;
            char confirmation;
            do {
                printf("\nQue voulez-vous modifier ?\n");
                printf("1 => Modifier l'auteur\n");
                printf("2 => Modifier la quantité\n");
                printf("3 => Modifier le prix\n");
                printf("0 => Annuler\n");
                printf("Entrez votre choix: ");
                scanf("%d", &choix);

                if (choix == 0){
                    printf("Modification annulée.\n");
                    return;
                }
                printf("Voulez-vous vraiment modifier cette information? (o/n): ");
                scanf(" %c", &confirmation);

                if (confirmation == 'o' || confirmation == 'O'){
                    switch (choix) {
                        case 1:
                            printf("Entrez le nouveau nom d'auteur: ");
                            scanf(" %[^\n]", livres[i].auteur);
                            printf("Auteur modifié avec succes!\n");
                            break;
                        case 2:
                            printf("Entrez la nouvelle quantité: ");
                            scanf("%d", &livres[i].quantite);
                            printf("Quantité modifiée avec succès!\n");
                            break;
                        case 3:
                            printf("Entrez le nouveau prix: ");
                            scanf("%d", &livres[i].prix);
                            printf("Prix modifié avec succes!\n");
                            break;
                        default:
                            printf("Choix invalide, essayez a nouveau.\n");
                    }
                } else {
                    printf("Modification annulée.\n");
                }

            } while (choix != 0);

            return;
        }
    }

    printf("Livre non trouvé.\n");
}



void rechercher(){
    printf("Rechercher des livres !\n");
    afficher();
    if (counter == 0) 
    return;

    char titre[20];
    printf("entrez le titre du livre a rechercher: ");
    scanf(" %[^\n]", titre);

    for (int i = 0; i < counter; i++){
        if (strcmp(livres[i].titre, titre) == 0) {
            printf("Livre trouve: Titre: %s  | Auteur: %s | Prix: %d | Quantite: %d |\n", livres[i].titre, livres[i].auteur, livres[i].prix, livres[i].quantite);
            return;
        }
    }
    printf("Livre non trouvé.\n");
}



void statistiques(){

}

void supprimer() {
    afficher();
    if (counter == 0){
        printf("Aucun livre trouvé pour supprimer!\n");
        return;
    }
    char titre[20];
    printf("Entrez le titre du livre a supprimer: ");
    scanf(" %[^\n]", titre);

    for (int i = 0; i < counter; i++) {
        if (strcmp(livres[i].titre, titre) == 0){ 
            char confirmation;
            printf("Voulez-vous vraiment supprimer le livre '%s'? (o/n): ", titre);
            scanf(" %c", &confirmation);  
            
            if (confirmation == 'o' || confirmation == 'O'){ 
                for (int j = i; j < counter - 1; j++){
                    livres[j] = livres[j + 1];
                }
                counter--;
                printf("Livre '%s' supprimé avec succes.\n", titre);
            } 
            
            else{
                printf("Suppression annulee.\n");
            }
            return;
        }
    }
    printf("Livre non trouvé.\n");
}


void afficherleMenu(){
    printf("\n---Menu Principal---\n\n");
    printf("1 => Ajouter un livre\n");
    printf("2 => Modifier un livre\n");
    printf("3 => Rechercher un livre\n");
    printf("4 => Supprimer un livre\n");
    printf("5 => Trier les livres\n");
    printf("6 => Statistiques\n");
    printf("0 => Quitter le programme\n");
    printf("Entrez votre choix : ");
}
void ajoutesousMenu(){
     printf("---Sous menu---\n\n1=> Ajouter un Livre\n2=> Ajouter plusieurs livres\n0=> Pour retour au menu principale\nEntrez votre choix : ");
}


int main(){
    int choice;
    
    do {
        afficherleMenu();
        scanf("%d", &choice);
        switch (choice) {
            int sousChoix;
            case 1: ajoutesousMenu();
            scanf("%d", &sousChoix);
                switch (sousChoix) {
                    case 1 : ajouterunLivre(); break;
                    case 2 : ajouterpluslivres(); break;
                    default : printf("retour au menu principal.\n");
                } break;

            case 2 : modifier(); break;
            case 3 : rechercher(); break;
            case 4 : supprimer(); break;
            case 5 : trier(); break;
            // case 6 : statistiques(); break;
            case 0 : printf("En sortie.\n");
            return 0;
            default:
                printf("choix invalide, essayer a nouveau!\n");
        }
    } while (choice != 0);
}

