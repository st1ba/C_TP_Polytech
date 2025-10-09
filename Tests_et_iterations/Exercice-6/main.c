#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

int main(void){
    srand(time(NULL));
    int num = rand() % (MAX) + 1;
    int input;

    printf("== Devinez le nombre ! ==\n");

    while(1){
        printf("Choisissez un nombre entre 0 et %i\n",MAX);
        scanf("%d",&input);
        if(input==num)break;
        if(input<num){
            printf("C\'est plus!\n");
        }
        else{
            printf("C\'est moins!\n");
        }
    }
    printf("Bravo ! Le nombre était bien %d!",num);
    return 0;
}