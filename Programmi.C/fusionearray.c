#include<stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int arr3[sizeof(arr1) && sizeof(arr2)];

    printf("l'arrray nuovo è: \n");
    for(int i = 0; i < 5 ; i++)
    {
        arr3[i] = arr1[i]; 
        printf(" %d", arr3[i]);
    }
    for( int i = 0; i < 5; i++)
    {
        arr3[i] = arr2[i];
        printf(" %d", arr3[i]);
    }
    printf("\n");
    return 0 ; 
}

/*int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {6, 7, 8, 9, 10};
    int arr3[sizeof(arr1) && sizeof(arr2)];
    
     for (int i = 0; i < 5; i++) {
        array3[i] = array1[i];
        array3[i + 5] = array2[i];
    }

    printf("Array fuso: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array3[i]);
    }
    printf("\n");
    return 0;
}
*/
