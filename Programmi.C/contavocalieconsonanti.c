#include<stdio.h>
#include<string.h>
//#include<ctype.h> per tolower ecc 
#define N 20

int main()
{
    char str[N];
    printf("inserisci la stringa : \n");
    scanf("%s", str);

    int i = 0, voc = 0, cons = 0;

    while(str[i] != '\0')
    {
        char c = str[i]; // assegno ad una variabile char gli elementi della stringa
        if(c >= 'a' && c <= 'z' )// faccio andare il program se questa varibaile legge elementi tra a e z
        {
            if(c == 'a' || c == 'o' || c == 'i' || c == 'e' || c == 'u')// verifico gli vocali
            {
                voc++;
            }
            else 
            {
                cons++;
            }
        }
        i++;
    }
    printf("la stringa ha %d vocali\nla stringa ha %d cons", voc, cons);// stampo
    printf("\n");
    return 0; 
}