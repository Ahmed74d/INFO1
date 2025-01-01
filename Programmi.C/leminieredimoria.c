#include<stdio.h>
#include<string.h>
#define N 1

struct nano{
    char nome[20];
    int giro_vita;
    char stato_alcolico[20];
}typedef nano;

void stampa_nani(nano nano1[]);
void partecipazione(nano nano1[]);

int main()
{
    nano nano1[N];

    stampa_nani(nano1);
    partecipazione(nano1);

    return 0; 
}

void stampa_nani(nano nano1[])
{
    for(int i = 0; i < N ; i++)
    {
        printf("inserisci il nome del nano: \n");
        scanf("%s", nano1[i].nome);
        
        printf("inserisci il giro di vita : \n");
        scanf("%d", &nano1[i].giro_vita);

        printf("stato alcolico : ubriaco o sobrio: \n");
        scanf("%s", nano1[i].stato_alcolico);
        
    }
}

void partecipazione(nano nano1[])
{
    for(int i = 0; i < N ; i++)
    {
        if(nano1[i].giro_vita >=120 && strcmp(nano1[i].stato_alcolico, "sobrio") == 0)
        {
            printf("il nano %s è idoeno alla participazione.\n", nano1[i].nome);        
        }
        else if(nano1[i].giro_vita < 120 || strcmp(nano1[i].stato_alcolico, "ubriaco") == 0)
        {
            printf("il nano %s non è idoeno alla partecipazione.", nano1[i].nome);
        }
    }
    printf("\n");
}