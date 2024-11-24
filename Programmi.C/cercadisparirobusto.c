#include <stdio.h>
int main()
{
    int a; 
    int count = 0, letti; 
    char typo;
    printf("inserisci i numeri interi dispari\n");
    while(a != 0)
    {
        letti = scanf("%d", &a );
        if(letti)
        {
            if((a % 2) != 0)
            {
            count++;
            }
        } 
        else 
        {
        scanf("%c", &typo);
        printf("attento hai inserito un valore %c non intero", typo);
        printf("\ninserisci un valore intero ya abn el wes5a");
        }
    }
    printf("i numeri dispari sono %d\n", count);
    return 0; 
}
