#include <stdio.h>

int main() {
    int somme = 0;

    // Boucle de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // Si divisible par 11 → ignorer et passer au suivant
        if (i % 11 == 0) {
            continue;
        }

        // Si divisible par 5 ou 7 → ajouter à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000 → arrêter la boucle
        if (somme > 5000) {
            break;
        }
    }

    // Affichage du résultat
    printf("Somme finale : %d\n", somme);

    return 0;
}
