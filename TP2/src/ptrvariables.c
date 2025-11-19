#include <stdio.h>
#include <stdint.h>  /* Pour uintptr_t */
#include <string.h>  /* Pour memcpy */

int main() {
    /* Déclaration des variables */
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678;
    long long int lli = 0x123456789ABCDEF0;
    float f = 3.14f;
    double d = 6.28;
    long double ld = 3.141592653589793238L;

    /* Pointeurs sur chaque variable */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* Affichage avant manipulation */
    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, *(unsigned char*)pc);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, *(unsigned short*)ps);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, *(unsigned int*)pi);
    printf("Adresse de li : %p, Valeur de li : %08lx\n", (void*)pli, *(unsigned long*)pli);
    printf("Adresse de lli : %p, Valeur de lli : %016llx\n", (void*)plli, *(unsigned long long*)plli);

    /* Pour float/double/long double, on copie les bits dans un entier pour afficher en hex */
    unsigned int fi;
}

