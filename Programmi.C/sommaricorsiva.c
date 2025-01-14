#include<stdio.h>

int sum(int n);
int main()
{
    int a; 
    printf("inserisci un numero naturale \n");
    scanf("%d", &a);

    int result = sum(a);
    printf("la somma è %d\n", result );
}

int sum(int n)
{
    if(n != 0)
    {
        return n + sum(n -1);
    }
    else{
        return n;
    }
}