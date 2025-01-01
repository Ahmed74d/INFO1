/*#include<stdio.h>
#include<string.h>
#define N 3 

struct scuola{
    char nome[50];
}typedef scuola;

struct studente{
    char nom[30];
    int voti[2];
    scuola scuola1;
}typedef studente; 

void carica(studente r[]);
void media(studente r[]);
void stampa(studente r[]);


int main()
{
    studente r[N];
    
    carica (r);
    stampa(r);
    media(r);
}


void carica(studente r[])
{
    for(int i = 0; i < N; i++)
    {
        printf("inserisci il nome : \n");
        scanf("%s", r[i].nom);

        printf("inserisci il nome della scuola \n");
        scanf("%s", r[i].scuola1.nome);

         printf("inserisci i voti : \n");
        for(int j = 0; j < 2 ; j++)
        {
           
            scanf("%d", &r[i].voti[j]);
        }
    }
}

void media(studente r[])
{
    for(int i = 0; i < N ; i++)
    {
        int somma = 0; // deve essere dentro lo stesso ciclo cosi viene resettata dopo 
        for(int j = 0; j < 2 ; j++ )
        {
            somma+= r[i].voti[j];
        }
        float media = (float)somma / 2;
        printf("La media di %s è: %.2f \n", r[i].nom, media);
    }  
}

void stampa(studente r[])
{
    for(int i = 0; i < N ; i++)
    {
        printf("lo studente %s \n", r[i].nom);

        printf("la scuola è %s \n", r[i].scuola1.nome);

        printf("i voti sono : \n");
        for(int j = 0; j < 2; j++)
        {
            printf("%d\n", r[i].voti[j]);
        }
    }
}
*/


#include<stdio.h>
#include<string.h>

struct studente{
    char nome[30];
    int voti[2];
}typedef studente;

struct scuola{
    char nome[30];
    struct studente studenti[3];
}typedef scuola; 

float media(studente studenti)
{
    int somma = 0; 
    for(int i = 0; i < 2 ; i++)
    {
        somma+=studenti.voti[i];
    }
    return (float)somma / 2;
}

float media(studente studenti);
void stampascuola(scuola scuola1);

int main()
{
    scuola scuola1 = 
    {
        "polimi",
        {
            {"ahmed", {2, 5}},
            {"mohamed", {4,8}},
            {"nadeen", {6, 4}},
        }
    };

     stampascuola(scuola1);
}

void stampascuola(scuola scuola1)
{
    printf("la scuola è %s\n", scuola1.nome);

    for(int i = 0; i < 3; i++)
    {
        printf("il nome è %s\n", scuola1.studenti[i].nome);
        printf("la media è %.2f\n", media(scuola1.studenti[i]));// quindi io ho preso la funzione della media, e dentro di essa
    }// ho richiamato sempliciemnete il numero dello studente a cui si riferisce qeulla media 
}