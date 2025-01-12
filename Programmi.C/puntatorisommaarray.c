#include<stdio.h>

int somma_array(int* arr);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int a = somma_array(arr);
    printf("la somma è %d\n", a); 
    return 0;
}

int somma_array(int* arr)
{
    int somma = 0;
    for(int i = 0; i < 5; i++)
    {
        somma+= *(arr + i);
    }
    return somma;
}