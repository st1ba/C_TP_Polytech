#include <stdio.h>

int main(void){

    int i=1;

    printf("====Multiples de 3====\n");
    while(i<=100)
    {
        if(i%3==0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}