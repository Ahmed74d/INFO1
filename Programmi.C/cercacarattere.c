#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
    char str[N];
    printf("inserisci la stringa : \n");
    scanf("%s", str);
    
    char c;
    printf("inserisci la lettera: \n");
    scanf(" %c", &c);

    int cont = 0; 
    int i = 0;
    //while(str[i] != '\0')// questo lo faccio se devo contare tutti le lettere pk in questo caso
    int lunghezza = strlen(str);// mi conta pure la \0 ma non rientra tra le lettere che servono 
        for(int j = 0; j < lunghezza ; j++)
        {
            if(str[j] == c)
        {
            cont++;
        }

        }
    printf("la lettera %c è uscita %d volte", c, cont);
    printf("\n");
    
    return 0; 
}