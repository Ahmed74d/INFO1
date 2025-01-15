/*ELSHOURBGY MOHAMED  3H    30/04/2024   MATRICE */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define R 5
#define C 5

void Carica(int mat[][C]);
void Stampa(int mat[][C]);
void CaricaRandom(int mat[][C]);
int Conta(int mat[][C], int);
void stampaDiagonale(int mat[][C]);
void stampaDiagonalesecondaria(int mat[][C]);

int main()
{

	srand(time(NULL));

	int matrice[R][C];


	printf("Inserisci con la tastiera i numeri nella matrice:\n");
	Carica(matrice);

	printf("Visuallizazione grafica della matrice:\n\n");
	Stampa(matrice);

	printf("La matrice e' stata rifatta con numeri casuali\n");
	printf("I numeri casuali sono:\n");
	CaricaRandom(matrice);
	Stampa(matrice);

	int num;
	printf("Inserisci il numero di cui vuoi sapere quante volte\nsi ripete nella matrice:\t");
	scanf("%d", &num);
	int cont = Conta(matrice, num);
	printf("Il numero si ripete %d volte nella matrice\n", cont);

	printf("Diagonale della matrice:\n");
	stampaDiagonale(matrice);

	printf("Diagonale inversa della matrice:\n");
	stampaDiagonalesecondaria(matrice);


}

void Carica(int mat[][C])
{
	for(int i=0; i<R; i++)
    {
		for(int j=0; j<C; j++)
		{
			scanf("%d", &mat[j][i]);
		}
	}
	printf("\n\n");
}

void Stampa(int mat[][C])
{
	for(int i=0; i<R; i++)
    {
		for(int j=0; j<C; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n\n");
	}
}

void CaricaRandom(int mat[][C])
{
	for(int i=0; i<R; i++)
    {
		for(int j=0; j<C; j++)
		{
			mat[i][j] = rand()% 31 + 10;
		}
	}
	printf("\n\n");
}

int Conta(int mat[][C],int x)
{
	int cont;

	for(int i=0; i<R; i++)
    {
		for(int j=0; j<C; j++)
		{
			if(mat[j][i] == x)
			{
				cont++;
			}
		}
	}
	return cont;
}

void stampaDiagonale(int mat[][C])
{
    for(int i=0; i<R; i++)
    {
    	printf("\n");
        for(int j=0; j<i; j++)
        {
            printf("\t");
        }
        printf("%d\n", mat[i][i]);
    }
}

void stampaDiagonalesecondaria(int mat[][C])
{
	for (int i=0; i<R; i++)
    {
		printf("\n");
        for (int j=0; j < C - i - 1; j++)
        {
            printf("\t");
        }
        printf("%d\n", mat[i][C - i - 1]);
    }
}
