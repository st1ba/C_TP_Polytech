#include <stdio.h>

int main(void) 
{
    printf("=====Affichage de la majuscule======\n\n");
    char c;
    do{
        printf("Entrez un caractère en minuscule entre a et f: ");
        c = getchar();
        switch(c){
            case 'a':
                printf("Le caractère en majuscule est A\n");
                break;
            case 'b':
                printf("Le caractère en majuscule est B\n");
                break;
            case 'c':
                printf("Le caractère en majuscule est C\n");
                break;
            case 'd':
                printf("Le caractère en majuscule est D\n");
                break;
            case 'e':
                printf("Le caractère en majuscule est E\n");
                break;
            case 'f':
                printf("Le caractère en majuscule est F\n");
                break;
            default:
                printf("Caractère invalide. Veuillez entrer une minuscule entre a et f.\n");
                while(getchar() != '\n');
                break;
        }
    }while(c < 'a' || c > 'f');
}