#include<stdio.h>

void max_min(int* arr, int* max, int* min);
int main()
{
    int arr[] = {1, 2, 8, 4, 5};
    int max;
    int min;

    max_min(arr, &max, &min);
    printf("il max è %d\nil min è %d\n", max, min);
}

void max_min(int* arr, int* max, int* min)
{
    *max = *arr;
    *min = *arr;
    for(int i = 0; i < 5; i++)
    {
        if(*(arr + i) > *max)
        {
           *max = *(arr + i);
        }
        if(*(arr + i) < *min)
        {
            *min = *(arr + i); 
        }
    }
    
    
}