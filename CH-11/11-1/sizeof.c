#include <stdio.h>

void main()
{
    int a;
    float b;
    char c;

    printf("INT : %zu\n", sizeof(a));
    printf("FLOAT : %lu\n", sizeof(b));
    printf("CHAR : %lu\n", sizeof(c));
    printf("CHAR : %lu\n", sizeof c);

    printf("\n\n\n");

    printf("DATA TYPES  INT : %lu\n", sizeof(int));
    printf("DATA TYPES  FLOAT : %lu\n", sizeof(float));
    printf("DATA TYPES  CHAR : %lu\n", sizeof(char));
    printf("DATA TYPES   LONG : %lu\n", sizeof(long));
    printf("DATA TYPES  DOUBLE : %lu\n", sizeof(double));
    printf("DATA TYPES  LONG LONG INT : %lu\n", sizeof(long long int));
}