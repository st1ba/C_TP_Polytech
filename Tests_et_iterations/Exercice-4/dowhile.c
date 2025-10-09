#include <stdio.h>

int main(void){

    int i=1;

    printf("====Multiples de 3====\n");
    do{
        if(i%3==0){
            printf("%d ",i);
        }
        i++;
    }while(i<=100);
    return 0;
}