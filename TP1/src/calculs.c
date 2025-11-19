#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    int resultat;

    /* Exemple de valeurs — à remplacer par des scanf si besoin */
    num1 = 12;
    num2 = 4;
    op = '+';  /* Change cette valeur pour tester : + - * / % & | ~ */

    switch (op) {

        case '+':
            resultat = num1 + num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat : %d\n", resultat);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat : %d\n", resultat);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat : %d\n", resultat);
            break;

        case '~':
            /* L'opérateur ~ est unaire (s'applique sur un seul nombre).
               On applique ~ uniquement à num1. */
            resultat = ~num1;
            printf("Résultat : %d\n", resultat);
            break;

        default:
            printf("Opérateur invalide !\n");
            break;
    }

    return 0;
}


