#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
    char s[N], st[N], str[N];
    printf("inserisci la prima strinag : \n");
    scanf("%s", s); 
    printf("inserisci la seconda stringa: \n");
    scanf("%s", st);

    // senza usare strcat
    /*printf("la stringa concatenata è %s%s", s, st);
    printf("\n");
    return 0; 
    */
   // usando strcat
    strcpy(str, s);// va scritto solo il nome della stringa senza [N]
    strcat(str, st);
    printf("la stringa concatenata è %s\n", str);
    printf("\n");
    return 0;
}