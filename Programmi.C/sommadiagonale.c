#include<stdio.h>
#define N 3

int main()
{
    int v[N][N]; 
    int somma = 0;
    
    for(int i = 0; i < N ; i++ )
    {
        for(int j = 0; j < N ; j++)
        {
            printf("inserisci il primo elemento %d %d\n", i+1, j+1 );
            scanf("%d", &v[i][j]);
        }
    }

    for(int i = 0; i < N; i++ )
    {
        for(int j = 0; j < N ; j++)
        {
            if(i = j )
            {
                somma+=v[i][j];

            }
        }
    }
    printf("la somma è %d", somma);
    printf("\n");
    return 0; 
}
