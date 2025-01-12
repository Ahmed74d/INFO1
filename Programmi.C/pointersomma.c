
//#include<stdio.h>

/*int* somma(int* a , int* b, int* somm);
int main()
{
    int a = 5;
    int b = 10;
    int somm;

    int* c = somma(&a, &b , &somm);
    printf("la somma è %d\n", *c);

    return 0 ; 


}

int* somma(int* a , int* b, int* somm)
{
    *somm = *a + *b; 
    return somm;
}*/


#include<stdio.h>

int* moltiplicazione(int* a, int* b , int* risultato);

int main()
{
    int a= 5; 
    int b= 6;
    int risultato;

    int* c = moltiplicazione(&a, &b, &risultato);

    printf("%d\n",*c );
    return 0; 
}

int* moltiplicazione(int* a, int* b , int* risultato)
{
    *risultato = *a * *b;
    return risultato;

}

