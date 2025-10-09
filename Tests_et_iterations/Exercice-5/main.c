#include <stdio.h>

int main(void){
    float V,res=0;
    int i=0;
    while(1){
        printf("Donnez une valeur reelle entre 1 et 2\n");
        scanf("%f",&V);
        if(V>1&&V<2)break;
        printf("Valeur Fausse!\n");
        fflush(stdin);
    }
    while(res<V)
    {
        i++;
        res=res+(1.0/i);
    }
    printf("i=%d",i);
}