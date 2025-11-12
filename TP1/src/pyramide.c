#include <stdio.h>

int main(void) {
    int compteur = 5; // Tu peux tester avec d'autres valeurs (ex : 3, 7, 9)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    printf("=== Triangle avec boucles for ===\n");

    // Boucle externe : lignes du triangle
    for (int i = 1; i <= compteur; i++) {

        // Boucle interne : caractères sur chaque ligne
        for (int j = 1; j <= i; j++) {

            // Règles d’affichage selon la ligne
            if (i == 1 || i == 2) {
                printf("* ");
            } else if (i == 3) {
                if (j == 2)
                    printf("# ");
                else
                    printf("* ");
            } else if (i == 4) {
                if (j == 2 || j == 3)
                    printf("# ");
                else
                    printf("* ");
            } else {
                printf("* ");
            }
        }

        printf("\n"); // Saut de ligne après chaque ligne du triangle
    }

    return 0;
}
