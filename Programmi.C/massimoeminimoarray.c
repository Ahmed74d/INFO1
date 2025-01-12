#include<stdio.h>

int main ()
{
    int arr[5] = {2,6,5,7,1};

    int max = arr[1];
    int min = arr[1];

    for(int i = 0; i < 5; i++)
    {
        if (arr[i] > max) // provo ogni volta se l'elemnto dell'array è più grande o meno
        // se è più grande nuova assegnazione se no riprovo ancora nel ciclo finchè 
        // non tovo il numero più grande con ò'ultima assegnazione
        {
            max = arr[i] ;
        }
        if(arr[i] < min) // stessa cosa 
        {
            min = arr[i];
        } 
        
    }
       printf("max e min sono %d e %d\n ", max , min);
       return 0 ; 
}