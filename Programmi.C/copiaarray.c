#include<stdio.h>
#include<string.h>

/*int main()
{
    char str[] = "abcdef";
    char str1[strlen(str)]; 
    strcpy(str1, str); 
    printf("%s\n %s\n", str, str1);

    return 0 ; 
}
*/

int main()
{
    int arr1[5] = {1, 2, 3, 4 ,5};
    int arr2[5]; 
    
    for(int i = 0; i < 5 ; i++)
    {
        printf("%d", arr1[i]);
    }
    printf("\n");
    printf("array copiato :\n");
    for ( int i = 0; i < 5 ; i++)
    {
        arr2[i] = arr1[i];
        printf("%d", arr2[i]);
    }
    printf("\n");
    return 0 ;
}
