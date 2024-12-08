#include<stdio.h> 
#define N 5
int main()
{
    int voti[N];
    int somma = 0;
    printf("inserisci i voti : \n");
    for(int i= 0 ; i < N ; i++)
    {
        scanf("%d", &voti[i]);
        somma+=voti[i];  //somma = sommma + voti[i] 
    }
    int media = somma / N; 
    printf("la media è : %d\n", media);
    


    return 0; 
}