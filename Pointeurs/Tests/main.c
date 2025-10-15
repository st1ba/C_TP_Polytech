#include <stdio.h>

int main()

{

    int t[7] = {66, 79, 78, 74, 79, 85, 82};

    int *ad;

    int i;

    ad = t;

    printf("Adresses et elements :\n");

    for(i=0; i<7; i++) {

        printf("Adresse : ");

        printf("%p", ad+i);

        printf("  Donnee : %d \n", *(ad+i));
        
    }

     return 0;
}