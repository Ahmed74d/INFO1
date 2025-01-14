#include<stdio.h>
#define N 50

int lunghezza(char str[], int cont);

int main()
{
    char str[N];
    int cont = 0;

    printf("inserisci la stringa : \n");
    scanf("%s", str);
    
    int f = lunghezza(str, cont);
    printf("la lunghezza della stringa è %d \n", f);
}

int lunghezza(char str[], int cont)
{
    if(str[cont] != '\0')
    {
        return 1+ lunghezza(str, cont + 1 ); // se non aggiungo l'1 non si accumulano i valori di volta in volta
    }// una volta che la funzione torna a 0 ovvero arriva a \0 il  valore tornera a 0 e quindi abbiamo fatto un cazzo
    else 
    {
        return 0 ;
    }
}