#include<stdio.h>

int fatt(int n);

int main()
{
    int a ;
    printf("inserisci il numero di cui vuoi trovare il fatttoriale: \n");
    scanf("%d", &a);

    int risultato = fatt(a);
    printf("il fattoriale di %d è %d", a, risultato);

    return 0;

}

int fatt(int n)
{
    if(n != 0)
    {
        return n * fatt(n-1);
    }
    else{
        return 1;
    }
}