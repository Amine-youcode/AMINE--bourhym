// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

#define maxtitre 100
#define maxauteur 100
#define maxlivre 100

char titre [maxtitre][maxlivre];
char auteur [maxauteur][maxlivre];
float prix [maxlivre];
int quantete [maxlivre];
int total_livre = 0;

void ajoute_livre(){
    if(total_livre >= maxlivre){
        printf("le stock est imposible d'ajoute livre");
        return;
    }
    printf("entre titre de livre: ");
    scanf("%s",&titre[total_livre]);
    printf("entre auteur de livre: ");
    scanf("%s",&auteur[total_livre]);
    printf("entre prix de livre: ");
    scanf("%f",&prix[total_livre]);
    printf("entre quantite de livre: ");
    scanf("%d",&quantete[total_livre]);
    total_livre++;
    printf("livre est ajoute\n");
}
void afficher_livre(){
    if(total_livre = 0){
        printf("livre n'est pas desponible dans le stock");
        return;
    }
    printf("les livre qui ajout dans le stock");
    for(int i=0;i<total_livre;i++){
        printf("%d titre%s auteur%s prix%.2f quantete%d",i+1,titre[i],auteur[i],prix[i],quantete[i]);
    }
}
void Rechercher_livre(){
    char titrede_rechercher[maxtitre];
    printf("entre le titre de rechercher:");
    scanf("%s",&titrede_rechercher);
    for (int i=0;i<total_livre;i++){
        if(strcmp(titre[i],titrede_rechercher) == 0){
            printf("le livre de rechercher: titre%s auteur%s prix%.2f quantete%d",titre[i],auteur[i],prix[i],quantete[i]);
            return;
        }
    }
    printf("le livre qui rechercher n'est pas stocke\n");
}
void  quantite_livre(){
    char titrede_rechercher[maxtitre];
    int novelle_quanteter;
    printf("entrer le titre de livre pour ficher le quantete");
    scanf("%s",&titrede_rechercher);
    for (int i=0;i<total_livre;i++){
        if(strcmp(titre[i],titrede_rechercher) == 0){
            printf("entre la nouvelle quanteter:");
            scanf("%d",&novelle_quanteter);
             quantete[i]=novelle_quanteter;
             printf("la quanteter est stock");
             return;
        }
    }
    printf("le quanteter n'est pas enregestrer");
}
void Supprimer_livre(){
     char titrede_rechercher[maxtitre];
    printf("entre le titre de rechercher:");
    scanf("%s",&titrede_rechercher);
   for (int i=0;i<total_livre;i++){
       if(strcmp(titre[i],titrede_rechercher)==0){
           for(int j=i;j<total_livre-1;j++){
               strcpy(titre[j],titre[j+1]);
               strcpy(auteur[j],auteur[j+1]);
               prix[j]=prix[j+1];
               quantete[j]=quantete[j+1];
           }
           total_livre--;
           printf("livre est supremer");
           return;
       }
   }
   printf("livre non stock");
}
void Afficherlenombretotal_livre(){
   int totalquantete = 0;
    for(int i=0;i<total_livre;i++){
      totalquantete+=quantete[i];  
    }
    printf("nomber total de livre %d\n",totalquantete);
}


int main() {
    int choix;
    do{
    printf("\n menu \n");
    printf("1.Ajouter un livre au stock.\n");
    printf("2.Afficher tous les livres disponibles.\n");
    printf("3.Rechercher un livre par son titre.\n");
    printf("4.Mettre à jour la quantité d'un livre.\n");
    printf("5.Supprimer un livre du stock.\n");
    printf("6.Afficher le nombre total de livres en stock.\n");
    printf("7.Ajouter un choix.\n");
    scanf("%d",&choix);
    switch (choix){
        case 1 :
        ajoute_livre();
        break;
         case 2 :
        afficher_livre();
        break;
         case 3 :
        Rechercher_livre();
        break;
         case 4 :
        quantite_livre();
        break;
         case 5 :
        Supprimer_livre();
        break;
         case 6 :
        Afficherlenombretotal_livre();
        break;
        case 7:
        printf("ajoute");
        break;
         default :
        ajoute_livre();
    }
    }while (choix!=7);
    
    
    
    return 0;
}