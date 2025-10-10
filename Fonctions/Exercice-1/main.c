#include <stdio.h>
#include "utils.h"
#include "utils.c"

int main(void){
    int approx=100;
    double approx_pi;
    approx_pi = pi_calc(approx);
    printf("Approximation de pi = %lf",approx_pi);
}