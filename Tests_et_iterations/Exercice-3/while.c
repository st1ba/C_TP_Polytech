#include <stdio.h>

int main(void) 
{
    int x=0,y=-5,res;
    while(x<=10){
        res=x+y;
        printf("Le produit de %i et %i est %i\n",x,y,res);
        y++;
        x++;
    }
    return 0;
}