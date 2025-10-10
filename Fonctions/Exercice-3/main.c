#include <stdio.h>

double comptevoyelle(void);
int voyelle(char);


int main(void){
    comptevoyelle();
    return 0;
}

double comptevoyelle(void){
    
    int nb=0,length=0;
    char input;
    do{
         input = getchar();
         nb+=voyelle(input);
         length++;
    }while(input!='\n');
    length-=1;
    printf("Cette chaine de caracteres est longue de %d, possede %d voyelles et a donc un ratio voyelle de %.2lf",length,nb,100.0*nb/length);
    return 0;
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
