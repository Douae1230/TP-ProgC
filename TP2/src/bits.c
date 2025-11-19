#include <stdio.h>

int main() {
    unsigned int d = 0x10010000;  /* valeur de test */
    int bit4, bit20;

    /* Extraction du 4e bit de gauche :
       position = 31 - 3 = 28 */
    bit4 = (d >> 28) & 1;

    /* Extraction du 20e bit de gauche :
       position = 31 - 19 = 12 */
    bit20 = (d >> 12) & 1;

    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
