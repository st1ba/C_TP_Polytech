#include <stdio.h>

int main(void){
    float pi=0;
    for(int i=0;i<10000;i++){
        if(i%2==0){
            pi+=1.0/(1+(i*2));
        }
        else{
            pi-=1.0/(1+(i*2));
        }
    }
    pi*=4;
    printf("Approximation de pi = %f",pi);
}