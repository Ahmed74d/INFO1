#include<stdio.h>

int main ()
{
    int n ; 
    printf("inserisci un numero : \n");
    scanf("%d", &n);

    for (int b = 1 ; b < n ; b++)
    {
        if(n % b == 0 )
        {
            printf(" %d\t", b);
        }
    }

    return 0; 
}