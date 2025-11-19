#include <stdio.h>

int main() {
    char s1[100] = "Bonjour";
    char s2[100] = "Monde";
    char copie[100];
    char concat[200];
    int i, j;

    /* --- 1. Calcul de la longueur --- */
    int longueur = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        longueur++;
    }

    printf("Longueur de \"%s\" = %d\n", s1, longueur);

    /* --- 2. Copie de s1 dans copie --- */
    for (i = 0; s1[i] != '\0'; i++) {
        copie[i] = s1[i];
    }
    copie[i] = '\0'; /* terminer la chaîne */

    printf("Copie de s1 : %s\n", copie);

    /* --- 3. Concaténation de s1 et s2 dans concat --- */

    /* Copier s1 dans concat */
    for (i = 0; s1[i] != '\0'; i++) {
        concat[i] = s1[i];
    }

    /* Ajouter s2 à la suite de concat */
    for (j = 0; s2[j] != '\0'; j++) {
        concat[i + j] = s2[j];
    }

    concat[i + j] = '\0'; /* terminer la chaîne concaténée */

    printf("Concaténation : %s\n", concat);

    return 0;
}
