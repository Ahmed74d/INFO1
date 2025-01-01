#include<stdio.h>
#include<string.h>

struct libro{
    char nome[100];
    char autore[100];
    int anno_pubblicazione;
}typedef libro;

void stampaelenco(libro libro1[]);
int main()
{
    libro libro1[3] = 
    {
        {"amora", "ahmed", 2003},
        {"nuovo", "mohamed", 2034},
        {"easy", "nadeen", 2023}
    };

    stampaelenco(libro1);
}

void stampaelenco(libro libro1[])
{
    for(int i = 0; i < 3 ; i++)
    {
        printf("il nome del libro è: %s\n", libro1[i].nome);
        printf("l'autore è %s\n", libro1[i].autore);
        printf("l'anno di pubblicazione è %d\n", libro1[i].anno_pubblicazione);
    }
}