#include<stdio.h>
#include<string.h>
#define N 100

int main ()
{
    char s[N], inversa[N];
    printf("inserisci la stringa: \n");
    scanf("%s", s);

    int lunghezza = strlen(s);
    for(int i = 0; i < N ; i++)
    {
        inversa[i] = s[lunghezza - 1 -i];
    }
    inversa[lunghezza] = '\0';
    //printf("%s", inversa);
   
   if(strcmp(s , inversa) == 0)// ho costruito l'inversa e poi ho fatto strcmp .
   {
    printf("la parola è palindroma \n");
   }
   else 
   {
    printf("la parola non è palindroma \n");
   }
   printf("\n");
    return 0;
}