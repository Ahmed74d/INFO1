#include <stdio.h>
int main ()
{
int numero ; 
printf("insersici un numero tra 2 e 12 \n");
scanf("%d", &numero);
printf("tabellina da ripassare : %d\n", numero);

 for (int b = 0; b <= 10; b++)
 {
    int prodotto = numero * b; 
    printf("%d * %d = %d\n", numero , b , prodotto );
 } 
        return 0;
}