#include <stdio.h>

int main(void) {
    int somme = 0; // Initialisation de la somme

    printf("=== Début du calcul ===\n");

    // Boucle de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // Si le nombre est divisible par 11 → on saute au suivant
        if (i % 11 == 0) {
            continue;
        }

        // Si le nombre est divisible par 5 ou 7 → on l’ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000 → on arrête tout
        if (somme > 5000) {
            printf("La somme a dépassé 5000 (valeur actuelle : %d) à i = %d\n", somme, i);
            break;
        }
    }

    printf("\n=== Somme finale = %d ===\n", somme);

    return 0;
}
