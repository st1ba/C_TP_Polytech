#include <stdio.h>

void permute(int*, int*);


int main(void){
    int a=1;
    int b=8;
    int* p_a=&a;
    int* p_b=&b;

    permute(p_a,p_b);

    printf("a = %d, b = %d",a,b);
}

void permute(int* p_a, int* p_b){
    int buf=*p_a;
    *p_a=*p_b;
    *p_b=buf;
    return;
}