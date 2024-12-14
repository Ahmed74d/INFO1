#include<stdio.h>
#define N 8

int main()
{
    int v[N];
    int b = 0;
    for(int i = 0; i < N ; i++)
    {
        printf("inserisci il numero %d\n", i +1);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < N-1 ; i++)
    {
        for(int j = 0; j < N - i - 1; j++)
        {
            if(v[j] == 0)
             {
                b = v[j+1];
                v[j+1]= v[j];
                v[j]= b; 

            }
        }
    }

    for(int j = 0 ; j < N ; j++)
    {
        printf("%d", v[j]);
    }
    printf("\n");
   return 0 ;  
}