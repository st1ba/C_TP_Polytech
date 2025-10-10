#include <stdio.h>


int pow(int,int);


int main(void){
    int x=2;
    for(int i=0;i<10;i++){
        printf("%d puissance %d = %d\n",x,i,pow(x,i));
    }
    
}

int pow(int x,int y){
    if(y==1){
        return x;
    }
    else if(y==0){
        return 1;
    }
    else if(y%2==0){
        return(pow(x*x,y/2));
    }
    else
    {
        return x*pow(x,y-1);
    }
}