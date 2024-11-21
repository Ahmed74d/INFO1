/*#include <stdio.h>

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
*/
/*#include <stdio.h>

int prodotto(int a , int b );

int main()
{
    int c , d; 
    printf("inserisci il primo numero \n");
    scanf("%d", &c);
    printf("inserisci il secodno numero \n");
    scanf("%d", &d);
    int f = prodotto(c , d );
    printf("il risultato è %d", f );
    return 0;
}

int prodotto(int a, int b )
{
    int result = a * b;
    return result; 
}
*/

// funzione che verifica se un numero è pari 
#include <stdio.h> 
#define N 50 

int numeropari(int v[]);

int main ()
{
    int vet[N];
    int a = numeropari(vet);
    printf("i numeri pari sono %d \n", a);
    return 0;
}

int numeroPari(int v[])
{
    int i = 0;
    for(i = 0 ; i < N ; i++)
    {
        if(v[i] % 2 == 0)
        {
            return i ;
        }
        else 
        {
             return 0 ; 
        }
       
    }
}