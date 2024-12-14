#include<stdio.h>

int main()
{
    int som[10] = {1,2,3,4,5,6,7,8,9,10};
     int somma = 0 ;// se lo dichairo all'interno del ciclo il ciclo si ripete ogni volta
     // con somma = 0 
    for(int i = 0 ; i < 10; i++)
    {
        somma = somma + som[i];
    } 
    printf("la somma dei numeri è %d\n", somma);
    return 0 ; 
}