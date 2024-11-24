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
            printf("*");
        }
        // Vai a capo dopo aver completato una riga
        printf("\n");
    }

    return 0; 
}
