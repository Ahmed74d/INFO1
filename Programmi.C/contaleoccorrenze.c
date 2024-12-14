#include<stdio.h>
#define N 6

int main()
{
    int v[N]; 
    int conteggiato[N] = {0};

    for(int i = 0; i < N; i++)
    {
        printf("inserisci il numero: %d \n", i+1);
        scanf("%d", &v[i]);
    }

     
    for(int i= 0; i < N ; i++)
    {
        if(conteggiato[i] == 0)
        {
            int cont = 0;
            for(int j = 0; j < N ; j++)
             {
                if(v[i] == v[j])
                {
                cont++;
                conteggiato[j] = 1;
                }
        }
        printf("il numero %d appare %d volte \n",v[i], cont);
        }      
    }

    printf("\n");
    return 0; 
}
// riguardare per capire l'array conteggiato.