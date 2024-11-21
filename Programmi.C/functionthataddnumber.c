#include <stdio.h>

void addNumber(int number1 , int number2)
{
    int sum = number1 * number2 ;
    printf("the sum of %d and %d is %d\n", number1,number2,sum);
}

int main ()
{
    int a , b ;
    printf("inserisci il pirmo numero \n");
    scanf("%d", &a);

    printf("inserisci il secdodno numero \n");
    scanf("%d", &b);
    addNumber(a, b);
    return 0;
}