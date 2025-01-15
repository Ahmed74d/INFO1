#include<stdio.h>
#include<string.h>
#define N 5

void stampa_normale(char s1[], int i);
void stampa_invertita(char s1[], int i);

int main()
{
    char st[N] = {'a', 'h', 'm', 'e', 'd'};
    int i = 0;

    printf("la parola da sinistra a destra è: \n");
    stampa_normale(st, i);
    printf("\n");

    printf("la parola invertita è : \n");
    stampa_invertita(st, N -1);// N-1 sarebbe l'inizializzazione dell'array, pk io devo partire dall'ultimo element
    printf("\n");// o  e poi fare i-- e quidni stampare al contrario qui la i all'inizio non equivale a 0 ma a N-1 
    // che sarebbe l'ultimo carattere nella posizione 4 per poter poi salire all'indietro 
        return 0; 

}

void stampa_normale(char s1[], int i)
{
    if(i < N)
    {
        printf("%c", s1[i]);// stampa il primo elemnto che è nella posizione 0 siccome la i è inizializzata
        stampa_normale(s1, i + 1);// a 0 poi aumento la i con la funz ricorsiva
    }
   

}

void stampa_invertita(char s1[], int i)
{
    if(i >= 0)
    {
        printf("%c", s1[i]);// stampo il primo elemeno che è nella posizone 4 grazie all'inizilaizzazione N -1
        stampa_invertita(s1, i-1);// poi diminuisco finchè non sono arrivato allo 0.
        
    }
   
}