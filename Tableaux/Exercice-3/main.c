#include <stdio.h>


void decalage(int[],int,int);
void printTab(int[],int);

int main(void){
    int arr[]={1,2,32,342,12,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int shift=-2;

    printf("tableau de base:");
    printTab(arr,size);
    decalage(arr,size,shift);
    printf("Tableau decale:");
    printTab(arr,size);

    return(0);
}

void decalage(int tab[],int size,int n){
    if(n%size==0)return;
    int buffer[size];
    for(int i=0;i<size;i++)buffer[i]=tab[i];

    if(n<0)for(int i=0;i<size;i++)tab[i]=buffer[i+((-n)%size)];
    else 
    for (int i = 0; i < size; i++)tab[i]=buffer[(i - (n % size) + size) % size];
    return;
}

void printTab(int tab[],int size){
    for(int i=0;i<size;i++)printf("%d ",tab[i]);
}
