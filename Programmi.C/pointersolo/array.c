#include<stdio.h>

int main()
{
    int number ; 
    scanf("%d", &number);
    //int* ptr = &number;
    int* ptr; 
    *ptr = number; 
    printf("%p\n", ptr);

}


/*#include<stdio.h>

int main()
{
    float salary = 1980.65;
    float* ptr = &salary;
    *ptr = 1999.87;
    printf("%.2f\n", salary);
    return 0; 
}
*/

/*#include<stdio.h>

int main()
{
    float salary; 
    scanf("%f", &salary);

    float* ptr = &salary;

    printf("il corrente è : %.2f\n", *ptr);

    float nuovo = *ptr * 2; 

    printf("il nuovo è : %.2f\n", nuovo);
    return 0;
}*/

// come usare un puntatore per accedere ai valori dentro l'array e anche per stamapre il loro indirizzo

//#include<stdio.h>

/*int main()
{
    int numeri[5] = {1, 3 , 5, 6, 7};

    for(int i = 0; i < 5; i++)
    {
        printf("i valori vecchi: %d = %p \n", *(numeri + i), numeri + i);// l'array è diventato già se stesso il puntatore 
    }// e poi & l'uso solamentee se devo assegnare una variabile alla variabile puntatore es. int* ptr = &salary

    printf("i valori nuovi sono : ");
    int nuovi[5] = {2, 4, 9, 8, 11};
    for(int i = 0; i < 5; i++)
    {
        *(numeri + i) = nuovi[i];
        printf("il valore nuovo : %d = %p \n", *(numeri + i), numeri + i);

    }
    // altrimenti per cambiare il valore ma uno alla volta potevo fare cosi: *numeri= 11 per cambiare il primo 
    // *(numeri + 1 ) = 22 per cambiare il secodno ecc 
}*/


/*int main()// stampare il numero più grande usando i puntatori 
{
    int numeri[5] = {34, 12, 21, 54, 48};
    int a;
    
    *numeri = a ; 
    for(int i = 0; i < 5; i++)
    {
        if(*(numeri + i) > a )
        {
            a = *(numeri + i);
        }
    }
    printf("il più grande è : %d\n", a);
}*/

