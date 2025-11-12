#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;

    printf("=== Opérateurs arithmétiques ===\n");
    printf("a = %d, b = %d\n\n", a, b);

    // Opérations arithmétiques
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);  // Division entière
    printf("a %% b = %d\n", a % b); // Modulo (reste de la division entière)

    printf("\n=== Opérateurs logiques / de comparaison ===\n");
    printf("a == b ? %d\n", a == b); // égalité (1 = vrai, 0 = faux)
    printf("a > b  ? %d\n", a > b);  // supérieur à
    printf("a < b  ? %d\n", a < b);  // inférieur à

    // Exemple d'utilisation d'opérateurs logiques combinés
    printf("\n=== Opérateurs logiques combinés ===\n");
    printf("(a > b) && (a != 0) ? %d\n", (a > b) && (a != 0)); // ET logique
    printf("(a < b) || (b != 0) ? %d\n", (a < b) || (b != 0)); // OU logique
    printf("!(a == b) ? %d\n", !(a == b));                     // NON logique

    return 0;
}

  
