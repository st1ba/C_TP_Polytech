#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAB_SIZE 20

int menu(int[],int);

float moyenne(int[],int);
float ecartType(int[],int);

void arrInv(int[],int);
void printTab(int[],int);
void stats(int[], int);

int main(void){
    srand( time( NULL ) );
    // int arr[]={1,2,32,342,12,2,9};
    // int size = sizeof(arr)/sizeof(arr[0]);

    int arr[TAB_SIZE];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++) 
    {
        arr[i] = rand() % TAB_SIZE+1;
    }

    while(menu(arr,size)!=0);
    return(0);
}

int menu(int tab[],int size){
    int select=0;
    do{
        printf("\n===== Que Voulez Vous ? =====\n");
        printf("1 : Inverser le tableau\n");
        printf("2 : Afficher les statistiques du tableau\n");
        printf("0 : Quitter le programme\n");
        printf("Votre choix:");
        scanf("%d",&select);
    }while(select<0||select>2);
    switch(select){
        case 0:
            return 0;
            break;
        case 1:
            arrInv(tab,size);
            break;
        case 2:
            stats(tab,size);
            break;
    }
    return 1;
}

void arrInv(int tab[],int size){
    printf("\n===== Inversion du Tableau =====\n");
    printf("Tableau initial : [");
    printTab(tab,size);
    printf("]\n");
    int buff[size];
    for(int i=0;i<size;i++)buff[i]=tab[i];
    for(int i=0;i<size;i++)tab[i]=buff[size-1-i];
    printf("Tableau Inverse: [");
    printTab(tab,size);
    printf("]\n");
}

void printTab(int tab[],int size){
    for(int i=0;i<size;i++)printf("%d ",tab[i]);
}

void stats(int tab[], int size){
    printf("\n===== Statistiques =====\n");
    printf("Tableau : [");
    printTab(tab,size);
    printf("]\nMOYENNE : %.2f\n",moyenne(tab,size));
    printf("ECART-TYPE : %.2f\n",ecartType(tab,size));

}

float moyenne(int tab[],int size){
    float total=0;
    for(int i=0;i<size;i++)total+=tab[i];
    return(1.0*total/size);
}

float ecartType(int tab[],int size){
    float total=0;
    for(int i=0;i<size;i++){
        total+=pow((1.0*tab[i]-moyenne(tab,size)),2);
    }
    return(sqrt(1.0*total)/size);
}