#include <stdio.h>

int main() {
    int n = 5; /* nombre d'étudiants */

    /* Tableaux pour les noms et prénoms */
    char noms[5][50] = {"Dupont", "Martin", "Bernard", "Petit", "Leroy"};
    char prenoms[5][50] = {"Alice", "Bob", "Claire", "David", "Emma"};

    /* Tableau pour les adresses */
    char adresses[5][100] = {
        "12 rue des Fleurs, Paris",
        "34 avenue Victor Hugo, Lyon",
        "56 boulevard Saint-Germain, Paris",
        "78 rue Lafayette, Lille",
        "90 avenue de la Republique, Marseille"
    };

    /* Tableaux pour les notes */
    float note_prog[5] = {15.5, 12.0, 17.0, 10.5, 14.0};
    float note_sys[5] = {14.0, 13.5, 16.0, 11.0, 15.0};

    int i;

    printf("Informations des étudiants :\n\n");

    for (i = 0; i < n; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.2f\n", note_prog[i]);
        printf("Note Système d'exploitation : %.2f\n", note_sys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
