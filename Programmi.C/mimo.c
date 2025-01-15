#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define R 5  // Numero di righe della matrice
#define C 5  // Numero di colonne della matrice

// Funzioni
void Carica(char mat[][C]);
void Stampa(char mat[][C]);
int Conta(char mat[][C], char x);
void stampaDiagonale(char mat[][C]);
void stampaDiagonalesecondaria(char mat[][C]);

int main()
{
    char matrice[R][C];  // Definizione della matrice di caratteri (5x5)

    // Inserimento manuale dei caratteri nella matrice
    printf("Inserisci con la tastiera i caratteri nella matrice:\n");
    Carica(matrice);

    // Visualizzazione della matrice
    printf("Visualizzazione grafica della matrice:\n\n");
    Stampa(matrice);

    // Ricerca di un carattere
    char c;
    printf("Inserisci il carattere di cui vuoi sapere quante volte si ripete nella matrice: ");
    scanf(" %c", &c);  // Aggiungi uno spazio prima di %c per catturare eventuali spazi bianchi residui
    int cont = Conta(matrice, c);
    printf("Il carattere '%c' si ripete %d volte nella matrice.\n", c, cont);

    // Stampa della diagonale principale
    printf("Diagonale principale della matrice:\n");
    stampaDiagonale(matrice);

    // Stampa della diagonale secondaria
    printf("Diagonale secondaria della matrice:\n");
    stampaDiagonalesecondaria(matrice);

    return 0;
}

// Funzione che carica i caratteri nella matrice
void Carica(char mat[][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("Inserisci il carattere per mat[%d][%d]: ", i, j);
            scanf(" %c", &mat[i][j]);  // Aggiungi uno spazio prima di %c per evitare problemi con il buffer
        }
    }
    printf("\n");
}

// Funzione che stampa la matrice
void Stampa(char mat[][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%c\t", mat[i][j]);
        }
        printf("\n");
    }
}

// Funzione che conta le occorrenze di un carattere nella matrice
int Conta(char mat[][C], char x) {
    int cont = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (mat[i][j] == x) {
                cont++;
            }
        }
    }
    return cont;
}

// Funzione che stampa la diagonale principale
void stampaDiagonale(char mat[][C]) {
    for (int i = 0; i < R; i++) {
        printf("%c\t", mat[i][i]);  // Stampa solo gli elementi sulla diagonale principale
    }
    printf("\n");
}

// Funzione che stampa la diagonale secondaria
void stampaDiagonalesecondaria(char mat[][C]) {
    for (int i = 0; i < R; i++) {
        printf("%c\t", mat[i][R - i - 1]);  // Stampa gli elementi della diagonale secondaria
    }
    printf("\n");
}
