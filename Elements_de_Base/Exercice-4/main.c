#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void) {
    printf("=== Calcul du volume d'une sphère ===\n\n");
    float rayon, volume;
    const float pi = 3.14159;
    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);
    volume = (4.0/3.0) * pi * pow(rayon, 3);
    printf("Le volume de la sphère de rayon %.2f est : %.2f\n", rayon, volume);
    return 0;   
}