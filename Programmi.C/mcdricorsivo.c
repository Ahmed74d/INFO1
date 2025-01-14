#include<stdio.h>

int mcd(int a , int b);

int main()
{
    int a ,b;
    printf("inserisci 2 numeri : \n");
    scanf("%d%d", &a, &b);

    int f = mcd( a , b);
     printf("il mcd tra i 2 numeri è %d", f);
    
    
}


int mcd(int a , int b)
{
    if( b == 0)// b sarebbe il resto cioè quando faccio una divisione di un numero su un altro numero come ad esempio 12 fratto
    {// 4 questo mi da giustamente 3 e quidni appunto non ci sarà resto e di conseguenza b diventa 
        return a;
    }
    else {
        return mcd(b, a % b);// questo è proprio come funziona l'algoritmo di euclide per calcolare l'mcd (b e a%b)
    }// la funzione continuerà a chiamarsi finchè a%b non diventa 0, quando cio accade il valore di b è il mcd
    // nella prima chiamata in cui il resto è 0 finisce la funzione ricorsiva e resituisce il valore di b 
}