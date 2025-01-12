#include<stdio.h>

void cambia_valori(int* ptr, int* pt);

int main()
{
    int a = 22;
    int b = 20; 

    printf("i nuemri prima del cambiamneto : %d %d \n", a, b );
    
    cambia_valori(&a , &b);
    printf("il primo numero è %d\n", a);
    printf("il secondo numero è %d\n", b);
    
}

void cambia_valori(int* ptr , int* pt)
{
    *ptr= 20;
    *pt = 22;

}