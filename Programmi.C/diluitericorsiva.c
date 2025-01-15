#include<stdio.h>
#include<string.h>
#define N 50

void carica(char s1[], char s2[]);
int controllo_diluita(char s1[], char s2[], int i, int j);

int main()
{
    char st[N];
    char str[N];
    int a = 0;
    int b = 0;

    carica(st, str);
    
    int f = controllo_diluita(st, str, a, b);
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

int controllo_diluita(char s1[], char s2[], int i, int j)
{
    if(i >= strlen(s1))// devo controllare se i equivale alla lunghezza di s1 e quidni significa che io ho trovato
    {// tutti gli elementi equivale a controllare se i == a nel codice non ricorsivo
        return 1;// ritorna 1 quidni si è diluita pk sono stati trovati tutti i caratteri in i.
    }
    if(j >= strlen(s2))//controlla se siamo arrivati fino al ultimo carattere di s2 ma senza trovare i caratteri
    {// di s1 e quidni non c'è la parola nella stringa più grande ritorna 0
        return 0; 
    }

    if(s1[i] == s2[j])// condizione per controllare ogni carattere di quella piccola in quella grande 
    {
    return controllo_diluita(s1, s2, i+1, j+1); // se ho trovato la il carattere di s1 in s2 aumenti sia i che j
    }
    else{
    return controllo_diluita(s1, s2, i, j+1);// se non ho trovato la i aumento la j e poi scorro se non la trovo
    }// lo stesso allora niente aumenta ancora la j , se alla fine esaurisco la j senza trovare gli sopra ritornera
    // 0
}






