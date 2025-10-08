#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void) 
{
    printf("=== Echange de deux variables ===\n\n");
    int a, b, temp;
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Après échange, a = %d et b = %d\n", a, b);
    return 0;
}