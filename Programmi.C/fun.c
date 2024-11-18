#include <stdio.h>
#define N 5

void carica(int v[]);
void stampa(int v[]);
int cerca(int v[]);
int uguale(int v[], int x); //passo come primo parametro il vettore e come secondo parametro una variabile x che va chiesta all'utente nel main

int main()
{
    int vet[N];
    int a;

    carica(vet);
    stampa(vet);
    int r = cerca(vet);
    printf("l'indice e' %d\n", r);
    
    printf("inserisci un numero\n");
    scanf("%d", &a);
    int f = uguale(vet,a);
    printf("il cont e' uguale a %d\n", f);

}

void carica(int v[])
{
    for(int i=0;i<N;i++)
    {
        printf("inserrsci il numero %d\n", i);
        scanf("%d", &v[i]);
    }
}

void stampa(int v[])
{
   for(int i=0;i<N;i++)
   {
        printf("il numero %d : %d\n", i, v[i]); 
   }
}

int cerca(int v[])
{
    // int min = v[0]
    int max=0;
    int indiceMax=0;
    for(int i=0;i<N;i++)
    {
        if(v[i]>max)
        {
            max = v[i];
            indiceMax = i;
        }
    }
    return indiceMax;
}

int uguale(int v[], int x)
{
    int cont = 0;

    for(int i=0;i<N;i++)
    {
        if(v[i] == x)
        {
            cont++;
        }
    }
    return cont;
}




