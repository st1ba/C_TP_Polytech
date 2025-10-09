#include <stdio.h>

int main(void) 
{
    int x;

    do{
        printf("Entrez votre mois");
        scanf("%d", &x);
        if(x < 1 || x > 12){
            printf("Mois invalide. Veuillez entrer un mois entre 1 et 12.\n");
            fflush(stdin);
        }
    }while(x < 1 || x > 12);  
    
    if(x%2 == 0){
        printf("Le mois %d est pair.\n", x);
    }
    else{
        printf("Le mois %d est impair.\n", x);
    }
    if(x == 1){
        printf("Bonne année !");
    }
}