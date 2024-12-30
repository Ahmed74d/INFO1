#include<stdio.h>

typedef struct complessi{
    double real;
    double immagine;
}complessi;

int main()
{
    complessi c1 = {.real = 55.87, .immagine = 66};
    complessi c2 = {.real = 97.34, .immagine = 45.22};

    complessi sum;
    sum.real = c1.real + c2.real;
    sum.immagine = c1.immagine + c2.immagine;

    printf("la somma del numero complessi è %.2lf + %.2lfi \n", sum.real, sum.immagine);

    return 0 ; 
}