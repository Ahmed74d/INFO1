#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 50 
// cosa più importante è il riordine 
void chiama_stringa(char str[], char string[]);
void controlla_lunghezza(char str[], char string[], int* a , int* b );
void controlla_anagrammi(char str[], char string[]);

int main()
{
    char str[N];
    char string[N];
    int a, b;

    chiama_stringa(str, string);
    controlla_lunghezza(str,string, &a, &b);
    controlla_anagrammi(str, string);

}

void chiama_stringa(char str[], char string[])
{
   
    printf("inserisci la prima stringa \n: ");
    scanf("%s", str);


    printf("inserisci la seconda stringa : \n");
    scanf("%s", string);

}

void controlla_lunghezza(char str[], char string[], int* a, int* b)
{
   *a = strlen(str);
   *b = strlen(string);

   if(*a != *b)// abbiamo controllato la lunghezza cosi già sin dall'inizio se non sono lunghi uguali non sono comq anagrammi
   {
    printf("le 2 parole non sono anagramme\n");
   }
}

void controlla_anagrammi(char str[], char string[])
{
   int len = strlen(str);

    for (int i = 0; i < len - 1; i++) { // abbiamo riordinato ogni stringa cosi da fare in modo che siano in ordine uguale tutte
        for (int j = i + 1; j < len; j++) { // 2 e quindi quando le confronot capsisco se hanno esattamnete le stesse lettere 
            if (str[i] > str[j]) {// o meno
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            }
        }
    }
    

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if(string[i] > string[j])
            {
                char temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }   
    }     


    if(strcmp(str, string) == 0)// ho confrontato le stringhe oridnate cosi se sono lunghi uguali e se hanno le stesse lettere 
    {// allora sono diagramme
        printf("le 2 parole sono anagramme \n");
    }
    else{
        printf("le 2 parole non sono angramme \n");
    }
}