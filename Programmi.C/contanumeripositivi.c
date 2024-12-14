#include<stdio.h>

int main()
{
    int arr[] = {1, -1, 2, -2, 3, -3 , 4, -4, 5, -5};

    int somma = 0; 
    for ( int i = 0; i < 10; i++)
    {
        if(arr[i] > 0 )
        {
            somma+= arr[i]; 
        }
    }
    printf("la somma è %d\n", somma);
    return 0; 
}