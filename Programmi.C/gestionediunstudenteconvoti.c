#include<stdio.h>
#include<string.h>
#define N 1 

struct studente{
    char nome[30];
    int voti[5];
    float media;
}typedef studente;

void caricastudente(studente stu[]);
void calcolamedia(studente stu[]);
void stampastudente(studente stu[]);

int main()
{
    studente stu[N];
    caricastudente(stu);
    stampastudente(stu);
    calcolamedia(stu);
    return 0;
}
    



void caricastudente(studente stu[])
{
    for(int i = 0; i < N; i++)
    {
        printf("inserisci il nome: \n");
        scanf("%s", stu[i].nome);

        for(int j = 0; j < 5; j++)
        {
            printf("inserisci i voti: \n");
            scanf("%d", &stu[i].voti[j]);
        }

    }
}

void calcolamedia(studente stu[])
{
    int somma = 0; 
    for(int i = 0; i < N ; i++)
    {

        for(int j = 0; j < 5; j++)
        {
            somma+=stu[i].voti[j];
        }
        float media = (float)somma / 5;
        printf("la media %.2f : \n ",media );
    }

}

void stampastudente(studente stu[])
{
    for(int i = 0; i < N ; i++)
    {
        printf("%s\n", stu[i].nome);

        for(int j = 0; j < 5; j++)
        {
            printf("%d\n", stu[i].voti[j]);
        }
    }
}
