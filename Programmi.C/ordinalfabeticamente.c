#include<stdio.h>
#include<string.h>
#define N 5
#define MAX_LEN 20

int main()
{
    char str[N][MAX_LEN], st[MAX_LEN];

    for(int i = 0; i < N; i++)
    {
        printf("inserisci la stringa %d :", i+1);
        scanf("%s", str[i]);
    }
    for(int i = 0; i < N-1; i++ )
    {
        for(int j = i+1; j < N; j++)
        {
            if(strcmp(str[i],str[j]) > 0)
            {
                strcpy(st,str[i]);
                strcpy(str[i],str[j]),
                strcpy(str[j], st);
            }
        }
    }
    printf("le stringhe ordinate: \n");
    for(int i = 0; i < N ; i++)
    {
        printf("%s\n", str[i]);
    }
    printf("\n");
    return 0; 
}