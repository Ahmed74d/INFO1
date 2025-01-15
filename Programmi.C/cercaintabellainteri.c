#include<stdio.h>
#define N 4
#define L 5

void carica(int* b);
int cerca_tabella(int tabella[][L], int b);
int main(){
    int tabella[N][L] = {{1 , 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20}};
    int a;
    carica(&a);
    int f = cerca_tabella(tabella, a);
    if( f == 1)
    {
        printf("il numero che stai cercando esiste nella tabella \n");
    }
    else{
        printf("il numero che stai cercando non esiste nella tabella :( \n");
    }
  /* printf("la tabella è fatta cosi \n");
   for(int i = 0; i < N; i++)
   {
    for(int j = 0; j < L; j++)
    {
        printf("%d ",tabella[i][j]);
    }
    printf("\n");
   }*/
   
    return 0;
}

void carica(int* b)// devo usare un puntatore cosi per poter puntare il valore della varibaile che mi inserisca
{// l'utente all'interno della main e quidni cosi risconosce se il valore ce nella tabella o meno
    printf("inserisci il numero che vuoi cercare: \n");
    scanf("%d", b);// nella scanf con il puntatore non si mette &
}

int cerca_tabella(int tabella[][L], int b)
{ 
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < L ; j++)
        {
            if(b == tabella[i][j])
            {
                return 1;
            }
        }
    }

    return 0; 
}