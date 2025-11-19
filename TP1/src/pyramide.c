#include <stdio.h>

int main() {
    int n = 5;      /* Hauteur de la pyramide */
    int i, j;

    printf("Generation d'une pyramide de hauteur %d :\n\n", n);

    /* Boucle sur chaque niveau de 1 a n */
    for (i = 1; i <= n; i++) {

        /* Affichage des espaces pour centrer la pyramide */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        /* Affichage des nombres croissants : 1, 2, ..., i */
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        /* Affichage des nombres decroissants : i-1, ..., 1 */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        /* Passage a la ligne suivante */
        printf("\n");
    }

    printf("\nPyramide complete.\n");

    return 0;
}
