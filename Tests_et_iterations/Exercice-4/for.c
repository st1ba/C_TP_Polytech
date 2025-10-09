#include <stdio.h>

int main(void){
    printf("====Multiples de 3====\n");
    for(int i=1;i<=100;i++){
        if(i%3==0){
            printf("%d ",i);
        }
    }
    return 0;
}