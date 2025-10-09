#include <stdio.h>

int main(void)
{
    int x=0,y=-5,res;
    do{
        res=x+y;
        printf("Le produit de %i et %i est %i\n",x,y,res);
        y++;
        x++;
    }while(x<=10);
    return 0;
}