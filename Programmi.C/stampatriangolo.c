/*#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    int j;
    char car = '*'; 

    printf("inserisci la dimensione del triangolo che ti serve: \n"); 
    scanf("%d", &n);

    while(i < n)// voglio avere il numero delle righe pari al numeri degli asetrischi della 
    // stessa, ovvero per la prima riga 1 asterisco , per la 2 2 asterischi ecc
    {
        j = 1;
        while(j <= i && j < n)// il numero delle colonne deve essere minore o uguale 
        //al numero di righe cioè nella prima riga ho un asterisco e quidni una sola riga
        // nella seconda riga ho 2 asterischi e qudini 2 righe, ecc nella 3 3  asterischi e 
        // quindi 3 colonne
        {
            printf("%3c", car);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
*/

// per stampare l'altra metà ovvero qeulla a destra superiore 

#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    char car = '*'; 

    printf("inserisci la dimensione del triangolo che ti serve: \n"); 
    scanf("%d", &n);

for(i = 1; i <= n ;i++ )// per stampare le righe che mi servono
{
    for(j = 1 ; j < i; j++ )
    {
        printf(" ");// per stampare gli spazi vuoti all'inizio a sinistra ,e che quindi
        // mi servono per avere dopo numero di righe maggiore delle colonne 
        
    }  
        for(j=i; j <= n; j++) // per stampare gli asterischi con numero di colonne maggiore
        //delle righe 
        // se metto j > i ottengo un trianglo giusto ma nel lato sinistro
        // li conta da sotto a sopra non il contrario 
    {
    printf("%c", car); // non serve un numero tra la % e la c pk alla fine non viene giusto 
    // siccome lo spazio si conta da sinistra quidni risulta sbagliato
    }
    printf("\n");
}
return 0;
}