#include <stdio.h>

int main() {
    printf("Taille des types de base sur cette machine :\n\n");

    /* Types de base */
    printf("sizeof(int) = %zu octets\n", sizeof(int));
    printf("sizeof(char) = %zu octets\n", sizeof(char));
    printf("sizeof(float) = %zu octets\n", sizeof(float));
    printf("sizeof(double) = %zu octets\n", sizeof(double));
    printf("sizeof(long) = %zu octets\n", sizeof(long));
    printf("sizeof(long long) = %zu octets\n", sizeof(long long));
    printf("sizeof(long double) = %zu octets\n", sizeof(long double));

    /* Pointeurs simples */
    printf("\nPointeurs :\n");
    printf("sizeof(int*) = %zu octets\n", sizeof(int*));
    printf("sizeof(char*) = %zu octets\n", sizeof(char*));
    printf("sizeof(float*) = %zu octets\n", sizeof(float*));
    printf("sizeof(double*) = %zu octets\n", sizeof(double*));

    /* Pointeurs multiples */
    printf("\nPointeurs multiples :\n");
    printf("sizeof(int**) = %zu octets\n", sizeof(int**));
    printf("sizeof(char**) = %zu octets\n", sizeof(char**));
    printf("sizeof(float**) = %zu octets\n", sizeof(float**));
    printf("sizeof(double**) = %zu octets\n", sizeof(double**));
    printf("sizeof(int***) = %zu octets\n", sizeof(int***));
    printf("sizeof(char***) = %zu octets\n", sizeof(char***));

    return 0;
}
