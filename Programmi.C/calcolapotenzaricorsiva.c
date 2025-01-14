#include<stdio.h>

int calcola_potenza(int a, int b, int i);

int main()
{
    int a;
    int i = 1;
    printf("inserisci il numero: \n");
    scanf("%d", &a);
    int b; 
    printf("inserisci la potenza: \n");
    scanf("%d", &b);

    int risultato =calcola_potenza(a, b, i);
    printf("il risultato è %d\n", risultato);

    return 0;
}

int calcola_potenza(int a, int b, int i)
{
    if(i < b)
    {
        return a * calcola_potenza(a, b, i+1);// se moltiplico la a all'intenro della funzione ricorsiva , allora sto facendo 
    }// una moltiplicazione in più , cosi invece è giusto
    else if(b == 0)// cosi qualsiasi numero allo 0 restituerù 1.
    {
        return 1;
    }
    else{
        return a; 
    }
}
