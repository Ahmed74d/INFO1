#include<stdio.h>

int main()
{
    int arr[10] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 11};
    float somma = 0;
    int num = 0; 
    for(int i = 0; i< 10; i++)
    {
        somma+=arr[i]; 
        num++;
    }
    printf("la loro somma é %.0f\n", somma);
    printf("sono %d numeri\n", num);
    float media = somma / num ; 
    printf("la media è %.1f", media);
    printf("\n");

    return 0;
}

