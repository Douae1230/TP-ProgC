#include <stdio.h>

int main() {
    printf("Tailles des types de données et pointeurs sur cette machine :\n\n");

    /* Types de base */
    printf("La taille de int est : %zu octets\n", sizeof(int));
    printf("La taille de char est : %zu octets\n", sizeof(char));
    printf("La taille de float est : %zu octets\n", sizeof(float));
    printf("La taille de double est : %zu octets\n", sizeof(double));
    printf("La taille de long est : %zu octets\n", sizeof(long));
    printf("La taille de long long est : %zu octets\n", sizeof(long long));
    printf("La taille de long double est : %zu octets\n", sizeof(long double));

    /* Pointeurs */
    printf("\nPointeurs simples :\n");
    printf("La taille de int* est : %zu octets\n", sizeof(int*));
    printf("La taille de char* est : %zu octets\n", sizeof(char*));
    printf("La taille de float* est : %zu octets\n", sizeof(float*));
    printf("La taille de double* est : %zu octets\n", sizeof(double*));

    /* Pointeurs multiples */
    printf("\nPointeurs multiples :\n");
    printf("La taille de int** est : %zu octets\n", sizeof(int**));
    printf("La taille de char** est : %zu octets\n", sizeof(char**));
    printf("La taille de float** est : %zu octets\n", sizeof(float**));
    printf("La taille de double** est : %zu octets\n", sizeof(double**));
    printf("La taille de int*** est : %zu octets\n", sizeof(int***));
    printf("La taille de char*** est : %zu octets\n", sizeof(char***));

    return 0;
}
