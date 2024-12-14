#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int pari = 0;
    printf("i numeri pari sono : \n");
    for(int i = 0; i < 10 ; i++)
    {
        
        if(arr[i] % 2 == 0)
        {
             printf(" %d", arr[i]);
            pari++;// ogni volta in cui trovo un numeor pari lo aumento e alla fine 
            // stampo l'ultimo numero aumentato 
        }
    }
    printf("\n");
    printf(" numeri pari : %d", pari);
    printf("\n");
     return 0 ; 
}

