#include <stdio.h>

int main ()
{

    while(1)
    {
       int a ; 
    printf("inserisci il numero che ti interessa : \n");
    scanf ("%d\n", &a);

        if((a < 0) && (a % 2 !=0) )
        {
        printf("%d\n",a);
        }
         if (a > 0)
        {
        printf("positive value\n");
        break; 
        }

    if((a < 0) && (a % 2 == 0))
        {
        printf("negative even\n");
        continue; 
        }
    }
    
    return 0;
}