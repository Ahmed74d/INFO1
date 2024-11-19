#include <stdio.h>

int main ()
{
    int a = 11;
    while( a < 100)
    {
        int b = 11; 

        while( b < 100)
        {
            int a1 = a / 10 ;
            int a2 = a % 10 ; 
    
            int b1 = b / 10 ; 
            int b2 = b % 10 ; 

            int somma = a + b ; 
            int prodotto = (a1 * a2) * (b1 * b2) ;
            if ( somma == prodotto )
            {
                printf("(%d,%d) sono una coppia di numeri affiatati\n", a , b);
            }
            b++;
        }
        a++;
    }
    return 0;
}