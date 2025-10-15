#include <stdio.h>
#include <stdlib.h>

int* fct (int,int);
int** fct2 (int,int,int);

int main(void){
    int size = 10;
    int val = 8;
    int xdim = 8;
    int ydim = 4;
    //int* p=fct(size,val);
    int** p=fct2(xdim,ydim,val);
    //for(int i=0;i<size;i++){
    //    printf("%d, ",p[i]);
    //}

    for(int i=0;i<ydim;i++)
    {
        printf("[");
        for(int j=0;j<xdim;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("]\n");
    }
    
    for(int i=0;i<ydim;i++)
    {
        free(p[i]);
    }
    free(p);
    return(0);
}



int* fct (int taille, int val_init){
    int *p = NULL;
    p = (int*)calloc(taille,sizeof(*p));
    for(int i=0;i<taille;i++){
        p[i]=val_init;
    }
    return p;
}

int** fct2 (int xdim, int ydim, int val_init){
    int **p = NULL;
    p = (int**)calloc(xdim,sizeof(*p));
    for(int i=0;i<ydim;i++)
    {
        p[i] = (int*)calloc(xdim,sizeof(*p));
        for(int j=0;j<xdim;j++)
        {
            p[i][j]=val_init;
        }
    }

    return p;
}