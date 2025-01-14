#include<stdio.h>

void fibonacci( int n, int pre, int att);

int main()
{
    int n;
    int att = 1;
    int pre= 1;
    printf("inserisci un numero intero positivo \n");
    scanf("%d", &n);
    
    if ( n > 0)
    {
        printf("La serie di Fibonacci fino al %d-esimo numero è: \n", n);
        fibonacci(n, pre, att);  // qui è come se io faccio printf, la funzione ricorsiva ricomincirà a stampare ogni valore che calcola 
    }
    else{
            printf("inserisci un altro numero\n");
    }

    return 0;

}

void fibonacci( int n, int pre, int att)
{
    if(n > 0)
    {
        printf("%d ", pre);// qui stampo il valore precedente che poi nella funz ricorsiva diventa quella attuale e quella precedente diventa pre+att
        fibonacci(n - 1 , att, pre + att);// ovvero la somma dei 2 numeri che precedono il numero che completa la serie , faccio -1 pk io voglio andare
    }// da 8 volte fino a > 0
}
// qui non potevo fare somma = pre + att, e poi att = somma , pre = att pk l'operazione di somma dovevo farla all'interno della funz ricorsiva
// ma se io devo farla direttamente nella funz allora non avevo senso fare la 2 asseganzione pk on avranno senso , quindi nella ricorsiva 
// faccio att al posto di pre che è come se fosse una sua assegnazione, poi faccio pre+ att che è equivalente alla somma = pre + att e cosi riesco ad ottenere tuuto giustamente 
