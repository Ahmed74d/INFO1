/*#include <stdio.h>
int main()
{
    int n; 
    int i = 0; 
    int j;
     char car = '*';
    printf("inserisci la misura del lato del quadrato: \n");
    scanf("%d", &n);

    while(i < n)
    { 
        j = 0;
        while(j < n )
        {
            printf("%3c", car);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0; 
}
*/
#include <stdio.h>

int main()
{
    int N; 
    printf("Inserisci la misura del lato del quadrato: \n");
    scanf("%d", &N);

    // Ciclo per ogni riga
    for (int i = 0; i < N; i++) 
    {
         //printf("*"); non posso mettere il print f qui perchè stamperà una colonna e una riga in più.
        // Ciclo per ogni colonna
        for (int j = 0; j < N; j++) 
        {
            char car= '*';
            printf("%3c", car);// i = 0, j = 0 allora va bene eseguo mi stampa la prima riga
            // con 3 colonne, poi mi stampa la 2 riga con 3 colonna 
            // ecc
        }
        // Vai a capo dopo aver completato una riga
        printf("\n");
    }

    return 0; 
}
