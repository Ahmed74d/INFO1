#include<stdio.h>

int main()
{
    int arr[] = {1, 2 ,3 ,4 , 5};

    printf("l'array inverso è : \n");
    for(int i = 4 ; i >= 0 ; i--) // non serve il < 5 tanto è minore di 5
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0; 
}