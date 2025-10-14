#include <stdio.h>
#include <stdlib.h>

int arrSort(int[],int);
void printTab(int tab[],int size);

int main(void){
    // int arr[]={1,2,32,342,12,2,9};
    // int size = sizeof(arr)/sizeof(arr[0]);

    int arr[50];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++) 
    {
        arr[i] = rand() % 51;
    }

    printf("tableau de base:");
    printTab(arr,size);
    printf("Tri effectue en %d permutations",arrSort(arr,size));
    printf("Tableau tri:");
    printTab(arr,size);
}

int arrSort(int tab[],int size){
    int buff;
    int totalPermut=0;
    int permut;
    do{
        permut=0;
        for(int i=0;i<size-1;i++){
            buff=tab[i+1];
            if(buff<tab[i]){
                tab[i+1]=tab[i];
                tab[i]=buff;
                permut++;
            }
        }
        totalPermut+=permut;
    }while(permut!=0);
    return(totalPermut);
}

void printTab(int tab[],int size){
    for(int i=0;i<size;i++)printf("%d ",tab[i]);
}
