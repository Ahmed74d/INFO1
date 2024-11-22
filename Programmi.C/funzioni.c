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
/*#include <stdio.h> 
#define N 10

int nPari(int v[]);

int main ()
{
    int vet[N];
    int i;
    
    printf("inserisci i numeri che vuoi analizzare: \n");
    for(i= 0; i < N ; i++)
    {
        printf("numer %d\n", i +1 );
        scanf("%d", &vet[i]);
    }

    int a = nPari(vet);
    printf("i numeri pari sono %d \n", a);
    return 0; 
}

int nPari(int v[])
{
    int count = 0; 
    for(int i = 0 ; i < N ; i++)
    {
        if(v[i] % 2 == 0)
        {
            count ++;
        }
    }
    return count;
}
*/
/*#include <stdio.h>

int sPari(int i );

int main ()
{
    int a; 
    printf("inserisci il numero che ti serve: \n");
    scanf("%d", &a);

    int f = sPari(a); 
    if (f)
    {
        printf("il numero %d e' pari\n", f);
    }
    else 
    {
        printf("il numero %d e' dipari\n", f);
    }
    

    return 0 ; 

}

int sPari(int i )
{
    if (i % 2 == 0)
    {
        printf("%d\n",i); 
        return i ; 
    }
   
     else 
    {
        return 0 ; 
    }
    
    
}
*/  

// trovare il maggiore tra 2 numeri 

/*#include <stdio.h>
int Maggiore(int a , int b );

int main ()
{
    int m , n;
    printf("inserisci il primo numero : \n");
    scanf("%d", & m);
    printf("inserisci il secondo numero : \n");
    scanf("%d", & n);

    int f = Maggiore (m , n);
    printf("il numero maggiore e' %d\n", f);

    return 0 ; 
    
}


int Maggiore(int a , int b )
{
    if (a > b )
    { 
        return a ; 
    }
    else 
    {
        return b ; 
    }
}
*/

// calcolare il fattoriale di un numero 
/*#include <stdio.h>
int Fattoriale(int N);

int main ()
{
    int f; 
    printf("inserisci il numero : \n");
    scanf("%d", & f);

    int m = Fattoriale(f);
    printf("il fattorale del numero è %d \n", m);

    return 0;
}

int Fattoriale (int N)
{ 
    int fat=1; 
    for(int i = 1 ; i <= N ; i++)
    {
        fat = fat * i ;
    }

     return fat;
}
*/

// calcola la somma di un array 

/*#include <stdio.h>
#define N 5 
int Somma(int v[]);

int main()
{
    int vet[N];
    int i;
    printf("inserisci un insieme di numeri max g : \n");
    for(i = 0; i < N ; i++)
    {
        printf("il numero : %d\n", i+1);
        scanf("%d", &vet[i]);
    }
    int f = Somma(vet);
    printf("%d\n", f);

    return 0 ; 
}

int Somma(int v[])
{
    
    int count = 0 ; 
    for(int i =0; i < N; i++)
    {
       count = count + v[i]; 
    } 
    
    //  non serve il count ++ pk tanto il conto si fa con il count che cambia ogni volta
    return count; 
}
*/

// funzione che inverte un array

#include <stdio.h>
void invertiA(int v[], int dim);

int main ()
{
    int vet[] = {1,2,3,4,5};
    int dim = sizeof(vet) / sizeof(vet[0]); 
    printf("stampa l'array originale \n");
    for(int i = 0; i < dim ; i++)
    {
        printf("%d\n", vet[i]);
    }

    invertiA(vet, dim);
        printf("array invertito \n");
        for(int i = 0; i < dim ; i++)
        {
            printf("%d", vet[i]);
        }
        printf("\n");

    return 0 ; 



}

void invertiA(int v[], int dim)
{
    int temp ; 
    for (int i = 0; i < dim / 2 ; i++)
    {
        temp = v[i];
        v[i] = v[dim - 1 - i];
        v[dim - 1 - i] = temp ; 

    }
}