#include <stdio.h>
#include <string.h>

#define N 5  /* Nombre d'étudiants */

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_prog;  /* Note en Programmation en C */
    float note_sys;   /* Note en Système d'exploitation */
} Etudiant;

int main() {
    Etudiant etudiants[N];
    int i;

    /* Initialisation des données */
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "15, Rue Victor Hugo, Paris");
    etudiants[2].note_prog = 17.0;
    etudiants[2].note_sys = 16.5;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "10, Rue Lafayette, Lille");
    etudiants[3].note_prog = 13.5;
    etudiants[3].note_sys = 11.0;

    strcpy(etudiants[4].nom, "Leroy");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "5, Avenue de la République, Marseille");
    etudiants[4].note_prog = 15.0;
    etudiants[4].note_sys = 15.5;

    /* Affichage des informations */
    printf("Informations des étudiants :\n\n");

    for (i = 0; i < N; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation en C : %.2f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("-----------------------------\n");
    }

    return 0;
}
