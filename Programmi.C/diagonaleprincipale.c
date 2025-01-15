#include <stdio.h>
#define N 5

void carica(char matt[][N]);
int controlla(char matt[][N]);

int main()
{
    char mat[N][N];
    carica(mat);
    int f = controlla(mat);
    if(f == 1)
    {
        printf("La parola sulla diagonale appare in una riga o colonna\n");
    }
    else{
        printf(" la parola sulla diagonale non appare mai :(\n");
    }
    

}

void carica(char matt[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("inserisci il carattere \n");
            scanf(" %c",&matt[i][j]);
        }
    }
    printf("\n\n");
}


int controlla(char matt[][N])
{
    char diagonale[N + 1];// creo una stringa nella quale mettere la parola sulla diagonale 
    diagonale[N] = '\0';// aggiungo il terminatore pk quando creo io la stringa in qeusto modo non ne disporrà

    for(int i = 0; i < N ; i++)// faccio un ciclo per asseganre alla stringa la parola che c'è sulla 
    {// diagonale
        diagonale[i] = matt[i][i];// utilizzo [i][i] per trovare la diagonale  e non [i][j]
    }

    for(int i = 0; i < N; i++)// ciclo esterno delle righe 
    {
        int match = 1; // varibaile che quando diventa 1 significa che ho trovato la riga o la colonna che mi 
        //serve
        for(int j = 0; j < N ; j++)// ciclo delle colonne che fa in modo si che si esplorano tutte le righe
        {
            if( matt[i][j] != diagonale[j])// la digaonale qui è con la j pk io fisso la j o l'indice delle 
            {//colonne e esploro le righe quidni cosi confronto la digaonale che è unica con tutte le righe 
                match = 0; // finche trovo qeulla che mi serve 
                break;// se vale 0 esco dal ciclo 
            }
        }
            if(match == 1)
                {
                    return 1;
                } 
    }

    for(int j = 0; j < N ; j++)// ciclo esterno delle colonne
    {
        int match = 1; 
        for(int i = 0; i < N ; i++)// ciclo interno delle righe che esplora le colonne
        {
            if(matt[i][j] != diagonale[i])// atesso ragionamento di prima 
            {
                match = 0; 
                break;
            }
        }
            if(match == 1)
            {
                return 1;
            }
    
    }
    return 0;// Se la parola della diagonale non è trovata in nessuna riga o colonn 
}



