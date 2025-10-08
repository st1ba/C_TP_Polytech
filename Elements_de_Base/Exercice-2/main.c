#include <stdio.h>
#include <limits.h>

int main(void) {

    printf("=== Étendues des types entiers ===\n\n");

    printf("char :   min = %d,   max = %d\n", CHAR_MIN, CHAR_MAX);
    printf("int  :   min = %d,   max = %d\n", INT_MIN, INT_MAX);
    printf("long :   min = %ld,  max = %ld\n", LONG_MIN, LONG_MAX);

    if (CHAR_MIN < 0)
        printf("\n--> Le type 'char' est signé\n");
    else
        printf("\n--> Le type 'char' est non signé\n");

    return 0;
}