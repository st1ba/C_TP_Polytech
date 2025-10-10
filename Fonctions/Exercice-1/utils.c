#include "utils.h"



double pi_calc(int x)
{
    double pi=0;
    for(int i=0;i<x;i++){
        if(i%2==0){
            pi+=1.0/(1+(i*2));
        }
        else{
            pi-=1.0/(1+(i*2));
        }
    }
    pi*=4;
    return pi;
}