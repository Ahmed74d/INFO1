#include<stdio.h>

int main()
{
    int v[6]= { 1, 2, 3, 4, 5, 6};
    int a;
    int b;
    printf("inserisci il numero che vuoi rimuovere: \n");
    scanf("%d", &a);

    for(int i = 0; i < 6; i++)
    {
        if(v[i] == a)
        {
            v[i]= 0;
        }
        
    }
     for(int i = 0; i < 5; i++)
     {
        for(int j = 0; j < 6 - i - 1; j++)
        {
            if(v[j] == 0)
            {
                 b = v[j+1];
                 v[j+1]= v[j];
                v[j] = b;
            }
           
        }
     }
    

    for(int j = 0; j < 6; j++)
    {
        printf("%d\t", v[j]);
    }

    printf("\n");
    return 0 ; 
}