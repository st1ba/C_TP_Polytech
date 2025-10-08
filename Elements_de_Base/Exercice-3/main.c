#include <stdio.h>
#include <limits.h>

int main(void) {

    printf("=== 32 ou 64 bits ===\n\n");

    if(__LDBL_MAX__ == __DBL_MAX__)
        {
            printf("Le système est en 32 bits\n");
        }
    else
        {
            printf("Le système est en 64 bits\n");
        }
    
}