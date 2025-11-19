#include <stdio.h>

int main() {
    unsigned int n;
    int i;

    /* Tableau de nombres à tester */
    unsigned int tests[5] = {0, 4096, 65536, 65535, 1024};
    int t;

    for (t = 0; t < 5; t++) {
        n = tests[t];

        printf("Nombre : %u -> binaire : ", n);

        /* On parcourt les 32 bits d'un int */
        for (i = 31; i >= 0; i--) {
            /* Extraction du bit i */
            unsigned int bit = (n >> i) & 1;
            printf("%u", bit);

            /* Petite séparation visuelle tous les 4 bits */
            if (i % 4 == 0 && i != 0) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
