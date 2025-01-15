#include<stdio.h>
#include<string.h>
#define N 50

void carica(char s1[], char s2[]);
int controllo_diluita(char s1[], char s2[]);

int main()
{
    char st[N];
    char str[N];

    carica(st, str);
    
    int f = controllo_diluita(st, str);
    if(f == 1)
    {
        printf("le 2 stringhe sono diluite \n");
    }
    else{
        printf(" le 2 stringhe non sono diluite \n");
    }
    
}

void carica(char s1[], char s2[])
{
    printf("inserisci la prima stringa: \n");
    scanf("%s", s1);
    printf("inserisci la seconda stringa \n");
    scanf("%s", s2);
}

int controllo_diluita(char s1[], char s2[])
{
    if(strlen(s1) > strlen(s2))
    {
        return 0;
    }
   int a = strlen(s1);
   int b = strlen(s2);
    int i = 0, j = 0;
    while(i < a && j < b)  // Scorri entrambe le stringhe
    {
        if(s1[i] == s2[j])  // Se c'è una corrispondenza di caratteri
        {
            i++;  // Passa al prossimo carattere di s1
        }
        j++;  // Passa al prossimo carattere di s2, se non c'è una corrispondenza tra il primo elemwnto di s1 e s2 
    }// aumenta soltanto j se non la trova mai i non sarà mai uguale ad a , stesso ragionamento vale per tutte
    // le lettere 
    if(i == a)  // Se tutti i caratteri di s1 sono stati trovati in ordine in s2
    {
        return 1;
    }
    else
    {
        return 0;
    }
}