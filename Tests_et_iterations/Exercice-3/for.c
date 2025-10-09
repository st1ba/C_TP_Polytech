#include <stdio.h>

int main(void) 
{
    int x=0,y=-5,res;
    for(;x<=10;x++){
        res=x+y;
        printf("Le produit de %i et %i est %i\n",x,y,res);
        y++;
    }
    return 0;
}