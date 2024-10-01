#include <stdio.h>
#include <string.h>

#define MAX_LIVRES 100
#define MAX_TITRE 100
#define MAX_AUTEUR 100

// Définition des tableaux pour stocker les informations des livres
char titres[MAX_LIVRES][MAX_TITRE];
char auteurs[MAX_LIVRES][MAX_AUTEUR];
float prix[MAX_LIVRES];
int quantites[MAX_LIVRES];
int totalLivres = 0;

// Fonction pour ajouter un livre au stock
void ajouterLivre() {
    if (totalLivres >= MAX_LIVRES) {
        printf("Le stock est plein. Impossible d'ajouter plus de livres.\n");
        return;
    }
    
    printf("Entrez le titre du livre: ");
    scanf(" %s", titres[totalLivres]);  // Pour lire une ligne complète
    printf("Entrez l'auteur du livre: ");
    scanf(" %s", auteurs[totalLivres]);
    printf("Entrez le prix du livre: ");
    scanf("%f", &prix[totalLivres]);
    printf("Entrez la quantité en stock: ");
    scanf("%d", &quantites[totalLivres]);
    
    totalLivres++;
    printf("Livre ajouté avec succès!\n");
}

// Fonction pour afficher tous les livres disponibles
void afficherLivres() {
    if (totalLivres == 0) {
        printf("Aucun livre disponible dans le stock.\n");
        return;
    }

    printf("Liste des livres disponibles:\n");
    for (int i = 0; i < totalLivres; i++) {
        printf("%d. Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n", 
               i + 1, titres[i], auteurs[i], prix[i], quantites[i]);
    }
}

// Fonction pour rechercher un livre par son titre
void rechercherLivre() {
    char titreRecherche[MAX_TITRE];
    printf("Entrez le titre du livre à rechercher: ");
    scanf(" %s", titreRecherche);
    
    for (int i = 0; i < totalLivres; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            printf("Livre trouvé: Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n", 
                   titres[i], auteurs[i], prix[i], quantites[i]);
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

// Fonction pour mettre à jour la quantité d'un livre
void mettreAJourQuantite() {
    char titreRecherche[MAX_TITRE];
    int nouvelleQuantite;
    printf("Entrez le titre du livre pour mettre à jour la quantité: ");
    scanf(" %s", titreRecherche);
    
    for (int i = 0; i < totalLivres; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            printf("Entrez la nouvelle quantité: ");
            scanf("%d", &nouvelleQuantite);
            quantites[i] = nouvelleQuantite;
            printf("Quantité mise à jour avec succès!\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

// Fonction pour supprimer un livre du stock
void supprimerLivre() {
    char titreRecherche[MAX_TITRE];
    printf("Entrez le titre du livre à supprimer: ");
    scanf(" %s", titreRecherche);
    
    for (int i = 0; i < totalLivres; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            // Déplacer tous les livres suivants d'une position vers le haut
            for (int j = i; j < totalLivres - 1; j++) {
                strcpy(titres[j], titres[j + 1]);
                strcpy(auteurs[j], auteurs[j + 1]);
                prix[j] = prix[j + 1];
                quantites[j] = quantites[j + 1];
            }
            totalLivres--;
            printf("Livre supprimé avec succès!\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

// Fonction pour afficher le nombre total de livres en stock
void afficherTotalLivres() {
    int totalQuantite = 0;
    for (int i = 0; i < totalLivres; i++) {
        totalQuantite += quantites[i];
    }
    printf("Nombre total de livres en stock: %d\n", totalQuantite);
}

int main() {
    int choix;
    do {
        printf("\nMenu:\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                ajouterLivre();
                break;
            case 2:
                afficherLivres();
                break;
            case 3:
                rechercherLivre();
                break;
            case 4:
                mettreAJourQuantite();
                break;
            case 5:
                supprimerLivre();
                break;
            case 6:
                afficherTotalLivres();
                break;
            case 7:
                printf("Fermeture du programme.\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 7);

    return 0;
}
