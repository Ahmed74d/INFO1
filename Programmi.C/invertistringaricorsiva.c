#include<stdio.h>
#include<string.h>
#define N 50

void inverti_stringa( char st[], char inversa[], int lunghezza, int i);

int main()
{
    char str[N], inversa[N];
    printf("inserisci la parola che vuoi controllare: \n");
    scanf("%s", str);

    int i = 0;
    int lunghezza = strlen(str);

    inverti_stringa( str, inversa, lunghezza, i);
    if(strcmp(inversa, str) == 0)
    {
        printf("la parola è palindroma \n");
    }
    else{
        printf("la parola non è palindroma\n");
    }

    return 0 ;    
}

void inverti_stringa( char st[], char inversa[], int lunghezza, int i)
{
    if(i < lunghezza)
    {
        inversa[i] = st[lunghezza - 1 - i];
        return inverti_stringa(st, inversa, lunghezza, i+1);
    }
    else{
        inversa[lunghezza] = '\0'; 
    }
    

}