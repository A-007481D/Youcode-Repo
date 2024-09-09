#include <stdio.h>

// la fonctionne affiche les livres disponibles
void afficher(char *titre[], char *auteur[], float prix[], int quantite[], int count)
{
    if (count <= 0){
        printf("aucun livre a afficher!\n");
    }
    
    printf("\nListe des livres :\n");

    for (int i = 0; i < count; i++)
    {
        printf("\n| Titre : %s | Auteur : %s | Prix :  %.2f | Quantite : %d |",titre[i], auteur[i], prix[i], quantite[i]);
    }
    printf("\n");
} 
int main(){
 
    char *titre[10] = {"Livre1", "Livre2", "Livre3"};
    char *auteur[10] = {"Auteur1", "Auteur2", "Auteur3"};
    float prix[10] = {10.0, 20.0, 30.0};
    int qu[10] = {5, 3, 7};
    int count = 3;
    char t[10] = "Livre2";  // Le titre à supprimer

    // Appel de la fonction delete
    count = 3;

    // Affichage des résultats après suppression
   afficher(titre, auteur, prix, qu, count);

    return 0;
}