#include <stdio.h>
#define N 4

int main() {
    char v[N][20]; // Array per memorizzare 4 nomi, ognuno fino a 49 caratteri

    // Legge i nomi dall'utente
    for (int i = 0; i < N; i++) {
        printf("Inserisci il nome %d:\n", i + 1);
        scanf("%s", v[i]); // Legge una stringa e la memorizza nell'array
    }

    // Stampa i nomi inseriti
    printf("I nomi inseriti sono:\n");
    for (int i = 0; i < N; i++) {
        printf("Nome %d: %s\n", i + 1, v[i]);
    }

    return 0;
}
