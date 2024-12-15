#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
    char s[N], inversa[N];
    printf("inserisci la stringa : \n");
    scanf("%s", s);
    int lunghezza = strlen(s);
    for(int i = 0; i < lunghezza ; i++)
    {
        inversa[i] = s[lunghezza - 1 - i];
    }
    inversa[lunghezza] = '\0';
    printf("%s", inversa);
    printf("\n");
    return 0 ; 
}