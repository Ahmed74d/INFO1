#include<stdio.h>
#include<string.h>

struct studente{
    char nome[30];
    int voti[2];
    int voti_originali[2];
}typedef studente;

void modifica_voto(studente studente1[]);
void stampa_voto_modificato(studente studente1[]);


int main()
{
    studente studente1[2] = {
        {"mohamed", {2 , 5}},
        {"ahmed", {3 , 6}}
    };

    for(int i = 0; i < 2; i++ )
    {
        for(int j = 0; j < 2 ; j++)
        {
            studente1[i].voti_originali[j] = studente1[i].voti[j];
        }
    }
    
    modifica_voto(studente1);
    stampa_voto_modificato(studente1);
    

    return 0 ;  
}

void modifica_voto(studente studente1[])
{
    for(int i = 0; i < 2 ; i++)
    {
        for(int j = 0; j < 2 ; j++)
        {
            if(studente1[i].voti[j] >= 5)
            {
                 studente1[i].voti[j] = studente1[i].voti[j] + 5;
            }
            else {
                studente1[i].voti[j]  = studente1[i].voti[j] + 2;
            }
            
        }
    }
    
}

void stampa_voto_modificato(studente studente1[])
{
   for(int i = 0; i < 2 ; i++)
    {
        printf("lo studente : %s\n", studente1[i].nome);

        for(int j = 0; j < 2 ; j++)
        {
            printf("voto iniziale %d\n", studente1[i].voti_originali[j]);
        }
        
        for(int j = 0; j < 2; j++)
        {
             printf("voto modificato %d\n", studente1[i].voti[j]);
        }
        
    }

}