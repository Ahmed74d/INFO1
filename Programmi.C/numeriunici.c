#include<stdio.h>
#define N 8 

int main()
{
    int v[N];
    int unici[N]; 
    int k = 0;
    
    for(int i = 0; i < N ; i++)
    {
        printf("Inserisci il numero %d:\n", i + 1);
         scanf("%d", &v[i]);

    }
   
   
    for(int i = 0; i < N; i++)// elenco gli elmenti del primo array
    {
        int count = 0; // introduco una variabile il quaele all'inizio è falsa
        for(int j = 0; j < N ; j++)// prendo gli elementi dello stesso array ma con una denominazione diversa
        // degli indirizzi per poter verificare se l'elemnto v[i] uguale allo stesso elemento nello stesso
        // array ovveri v[j] e poi scorro tutti gli elementi con inidirizzo j per capire se l'elemento v[i] 
        // è uguale ad un altro elemento dello stesso array
        {
            if(v[i] == v[j])
            {
                count++; // finchè il primo elemento si ripete nell'array aume to il counto quindi esce 
                // ritorna 0 quindi falso ancora e comincia finchè non sono più uguali e quidni non si ripete 
                // e esce dal ciclo
            }
            
        }
        if(count == 1) // se count è vero (=1) il che significa che la if di prima è diventata falsa, allora
        {// non sono più uguali
            unici[k++] = v[i];// allora prendo l'array che sto costrundo metto k++ pk k era 0 cosi signfica che
        }// non c'è nessun posto l'auamnto cosi ho un posto al quale assegno il valore di v[i] che non si è 
        // più ripetuto.
    }
    printf("i numeri unici sono"); 
    for(int i = 0; i < k; i++)// stampo gli elementi del array che ho costruito
    {
        printf(" %d", unici[i]);
    }
    printf("\n"); 
    return 0 ; 
}