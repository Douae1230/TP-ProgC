
  #include <stdio.h>

int main(void) {
    // --- Types caractères ---
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // --- Types courts ---
    short s = -12345;
    signed short ss = -12345;
    unsigned short us = 50000;

    // --- Types entiers ---
    int i = -123456;
    signed int si = -654321;
    unsigned int ui = 4000000000U;

    // --- Types longs ---
    long l = -123456789L;
    signed long sl = -987654321L;
    unsigned long ul = 4000000000UL;

    // --- Types longs longs ---
    long long ll = -123456789012345LL;
    signed long long sll = -987654321012345LL;
    unsigned long long ull = 123456789012345ULL;

    // --- Types flottants ---
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.618033988749895L;
printf("=== Variables de base ===\n\n");

    printf("char               : %c\n", c);
    printf("signed char        : %d\n", sc);
    printf("unsigned char      : %u\n", uc);

    printf("short              : %d\n", s);
    printf("signed short       : %d\n", ss);
    printf("unsigned short     : %u\n", us);

    printf("int                : %d\n", i);
    printf("signed int         : %d\n", si);
    printf("unsigned int       : %u\n", ui);

    printf("long int           : %ld\n", l);
    printf("signed long int    : %ld\n", sl);
    printf("unsigned long int  : %lu\n", ul);

    printf("long long int      : %lld\n", ll);
    printf("signed long long   : %lld\n", sll);
    printf("unsigned long long : %llu\n", ull);

    printf("float              : %.2f\n", f);
    printf("double             : %.6f\n", d);
    printf("long double        : %.15Lf\n", ld);

    return 0;
}
