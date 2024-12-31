#include<stdio.h>
#include<string.h>
#define N 1 // qui sto chiedendo i dati di una sola perosna sto facendeo un solo struct se lo aumento significa che 
// farò più di una persona. 

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
    for(int i = 0; i < N; i++)// faccio un ciclo per prendere il nome della persona cioè per fare una stringa
    {
        printf("inserisci il nome: \n");
        scanf("%s", stu[i].nome);// la i vicino allo struct pk sto facendo per la persona nella prima posizione che sarebbe
// anche l'unica in questo programma
        for(int j = 0; j < 5; j++)// faccio un altro ciclo per l'array dei voti, lo faccio dentro quello del nome , per poter 
        {// associare a quella persona questi voti 
            printf("inserisci i voti: \n");
            scanf("%d", &stu[i].voti[j]);// assoccio alla perosna nel posto i questi voti 
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
        float media = (float)somma / 5;// (float) per creare la virgola mobile ovvero per fare si che i numeri dopo la virgola
        printf("la media %.2f : \n ",media );// si vedano . 
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


/*#include<stdio.h>
#include<string.h>
#define N 5

struct studente{
    char nome[30];
    int voti[N];
}typedef studente;

float calcolamedia(studente studente1);
void stampa(studente studente1);

int main()
{
    studente studente1;
    strcpy(studente1.nome, "ahmed");
    
    int voti_iniziali[N] = {5, 10, 4, 3, 2};
    for(int i = 0; i < N ; i++)
    {
        studente1.voti[i] = voti_iniziali[i];
    } 
    
    stampa (studente1);

    float r = calcolamedia(studente1);
     printf("la media è : %.2f\n", r);
}

float calcolamedia(studente studente1)
{
    int somma = 0;
    for(int i = 0 ; i < N; i++)
    {
        somma+=studente1.voti[i];
    }
    
    float media = (float)somma / N ;
    
    return media;
}

void stampa(studente studente1)
{
    printf("il nome è : %s\n", studente1.nome);
    printf("i voti sono: \n");
    for(int i = 0; i < N ; i++)
    {
        printf("%d\n", studente1.voti[i]);
    }
}
*/
