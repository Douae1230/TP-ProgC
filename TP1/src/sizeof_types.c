#include <stdio.h>

int main(void) {
    printf("Taille des types de base en octets :\n\n");

    printf("char               : %zu octet(s)\n", sizeof(char));
    printf("signed char        : %zu octet(s)\n", sizeof(signed char));
    printf("unsigned char      : %zu octet(s)\n", sizeof(unsigned char));

    printf("short              : %zu octet(s)\n", sizeof(short));
    printf("signed short       : %zu octet(s)\n", sizeof(signed short));
    printf("unsigned short     : %zu octet(s)\n", sizeof(unsigned short));

    printf("int                : %zu octet(s)\n", sizeof(int));
    printf("signed int         : %zu octet(s)\n", sizeof(signed int));
    printf("unsigned int       : %zu octet(s)\n", sizeof(unsigned int));

    printf("long               : %zu octet(s)\n", sizeof(long));
    printf("signed long        : %zu octet(s)\n", sizeof(signed long));
    printf("unsigned long      : %zu octet(s)\n", sizeof(unsigned long));

    printf("long long          : %zu octet(s)\n", sizeof(long long));
    printf("signed long long   : %zu octet(s)\n", sizeof(signed long long));
    printf("unsigned long long : %zu octet(s)\n", sizeof(unsigned long long));

    printf("float              : %zu octet(s)\n", sizeof(float));
    printf("double             : %zu octet(s)\n", sizeof(double));
    printf("long double        : %zu octet(s)\n", sizeof(long double));

    return 0;
}
