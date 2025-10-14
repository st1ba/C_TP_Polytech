#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxTab(int[],int);
int rechercher( int tab[], int nb_elt, int x) ; 

int main(void){
    srand( time( NULL ) );
    int tableau[]={1,2,32,342,12,2,9};
    int tab_size=(sizeof(tableau)/sizeof(tableau[0]));
    printf("Le maximum du tableau 1 est %d",maxTab(tableau,tab_size));


    int tableau2[50];
    int taille=sizeof(tableau2)/sizeof(tableau2[0]);
    for(int i=0;i<taille;i++) 
    {
        tableau2[i] = rand() % 51;
    }
    int NB = 4;
    printf("Le nombre %d est trouvable a l'index %d",NB,rechercher(tableau2,taille,NB));
}

int maxTab(int tab[],int size){
    int max=tab[0];
    for(int i=1;i<size;i++){
        if(max<tab[i]) max=tab[i];
    }
    return max;
}

int rechercher( int tab[], int nb_elt, int x){
    
    for(int i=0;i<nb_elt;i++){
        if(tab[i]==x) return i;
    }
    return(-1);
}

