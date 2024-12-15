#include<stdio.h>
#include<string.h>
#define N 20

int main()
{
    char str[N];
    
        printf("inserisci la stringa : \n ");// sto inserendo una sequenza di cartteri quindi la stringa essa 
        // stessa è già l'array
        scanf("%s", str);
    
    int cont = 0;
    
        while(str[cont] != '\0')// metto come sua lunghezza cont cosi ogni volta in cui legge un caratttere 
        {// si assicura che non sia \0 poi il cont auemnta quindi la sua lunghezza aumenta di un posto e 
            cont++; // di conseguenza controllo l'elemnto che c'è nel posto nuovo(quello successivo a quello gia
        }    //controllato)
        
       
    printf("la stringa è lunga %d caratteri", cont);
    printf("\n");

    return 0; 
}