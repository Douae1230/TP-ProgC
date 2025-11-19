#include <stdio.h>

int main() {
    int n = 10;        /* Nombre de termes à afficher */
    int i;
    int u0 = 0;        /* U0 */
    int u1 = 1;        /* U1 */
    int un;            /* Terme courant */

    printf("Suite de Fibonacci (%d termes) :\n", n);

    /* Afficher les deux premiers termes */
    printf("%d ", u0);
    if (n > 1) {
        printf("%d ", u1);
    }

    /* Calcul des termes suivants */
    for (i = 2; i < n; i++) {
        un = u0 + u1;   /* Un = Un-1 + Un-2 */

        printf("%d ", un);

        /* Mise à jour pour l’itération suivante */
        u0 = u1;
        u1 = un;
    }

    printf("\nFin de la suite.\n");

    return 0;
}
