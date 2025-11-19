#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11  /* Taille des tableaux */

int main() {
    int tab_int[N];
    float tab_float[N];
    int i;

    /* Initialiser le générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplir les tableaux avec des valeurs aléatoires */
    for (i = 0; i < N; i++) {
        *(tab_int + i) = rand() % 100;        /* entier entre 0 et 99 */
        *(tab_float + i) = ((float)rand() / RAND_MAX) * 10; /* float entre 0 et 10 */
    }

    /* Affichage avant multiplication */
    printf("Tableau d'entiers (avant multiplication par 3) :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", *(tab_int + i));
    }
    printf("\n");

    printf("Tableau de nombres flottants (avant multiplication par 3) :\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", *(tab_float + i));
    }
    printf("\n");

    /* Multiplication par 3 des éléments dont l'indice est divisible par 2 */
    for (i = 0; i < N; i++) {
        if (i % 2 == 0) {
            *(tab_int + i) *= 3;
            *(tab_float + i) *= 3;
        }
    }

    /* Affichage après multiplication */
    printf("\nTableau d'entiers (après multiplication par 3) :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", *(tab_int + i));
    }
    printf("\n");

    printf("Tableau de nombres flottants (après multiplication par 3) :\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", *(tab_float + i));
    }
    printf("\n");

    return 0;
}
