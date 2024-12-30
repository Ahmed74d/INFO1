#include<stdio.h>
#include<string.h>
#define N 100

struct libro{
    char titolo[N];
    char autore[N];
    int anno_pubblicazione;
}typedef libro;

void stampalibro( libro libro1);

int main()
{
    libro libro1;
    strcpy(libro1.titolo , "amore");
    strcpy(libro1.autore, "ahmed");
    libro1.anno_pubblicazione = 1978;
    
    stampalibro(libro1);

    return 0;
}

void stampalibro( libro libro1)
{
     printf("il titolo del libro è : %s\n", libro1.titolo);
    printf("l'autore del libro è: %s\n", libro1.autore);
    printf("l'anno di pubblicazione è %d\n", libro1.anno_pubblicazione);
}