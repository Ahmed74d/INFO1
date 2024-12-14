#include<stdio.h>

int main ()
{
    int arr[10] = {1, 2, 3, 4 , 5, 6, 7, 8, 9, 10};
    int a, trovato = 0 ; // trovato è inizializzata a 0 quidni all'inizio è falsa
    printf("inserici il numero che vuoi trovare: \n");
    scanf("%d", &a);

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == a)
        {
            printf("la posizione è %d", i);
            trovato = 1; // se trovo il numero chiesto nell'array assegno a trovato 1 cioè è diventata vera
            break;// interrompo subito l'array e esco fuori
        }
    }
    if(!trovato) // se trovato è vero allora non yrovato è falso e quindi non stampo questa printf
    // al contrario se il numero non è stato trovato quidni trovato è rimasta falsa allora non trovato sarà 
    // e quindi viene stampata questa printf 
    {
        printf("numero non trovato.");
    }
    printf("\n");
    return 0 ; 
}

//come usare la funzione randomica
/*#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
int main()
{
    int v[N];
    int a;
    srand(time(NULL));

    //printf("insefrsic i nuneri : \n");
    for(int i=0; i<N;i++)
    {
        v[i] = rand () % 10 + 1;
        printf("i nuemri sono : %d\n",v[i]);
    }

    printf("insrisci un numero da cercare : \n");
    scanf("%d", &a);    
}
*/

