#include <stdio.h>


int voyelle(char);


int main(void)
{
    char lettre='e';
    int res=voyelle(lettre);
    if(res==1)printf("voyelle!");
    else printf("consonne!");
}

int voyelle(char lettre)
{
    switch(lettre){    
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return 1;
        default:
            return 0;
    }
}