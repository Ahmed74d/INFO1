#include<stdio.h>
#include<string.h>
#define N 20

int main()
{
    char s[N];
    char s1[N];
    printf("inserisci la prima parola : \n");
    //scanf("%s", s);
    if(fgets(s , sizeof(s), stdin) != NULL)
    {
        printf("\n");
    }
    //scanf("%s", s1);
    printf("inserisci la seconda parola: \n");
    if(fgets(s1 , sizeof(s1), stdin) != NULL)
    {
        printf("\n");
    }

    int r = strlen(s);
    int a = strlen(s1);
    if(r > a )
    {
        printf("%s\n", s);
    }
    else{
        printf("%s\n", s1);
    }

    return 0;
}