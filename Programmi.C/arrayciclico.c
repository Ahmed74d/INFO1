#include <stdio.h>
#define N 8  // Definiamo la dimensione del vettore

int Vetciclico(int v[]);

int main() 
{
    int v[N] = {2, 4, 6, 7, 5, 1, 0, 3};  // Definizione del vettore

    int r = Vetciclico(v);
    
    if(r == 1) 
    {
        printf("Il vettore è ciclico\n");
    } 
    else 
    {
        printf("Il vettore non è ciclico\n");
    }

    return 0;
}

int Vetciclico(int v[]) 
{
    int currentIndex = 0;
    int visited[N] = {0};  // Array per tenere traccia degli indici visitati

    // Usa il ciclo for per esplorare il vettore
    for (int i = 0; i < N; i++) 
    {
        // Se l'indice attuale è fuori dal range [0, N-1], restituisci 0 (non ciclico)
        if (currentIndex < 0 || currentIndex >= N) 
        {
            return 0;  // L'indice è fuori dal range, non ciclico
        }

        // Se l'indice è già stato visitato, significa che siamo nel ciclo
        if (visited[currentIndex] == 1) 
        {
            return 1;  // Ciclico
        }

        // Segna l'indice come visitato
        visited[currentIndex] = 1;

        // Passa all'indice successivo come specificato nell'array
        currentIndex = v[currentIndex];

        // Se l'indice va fuori dai limiti dell'array, l'esplorazione termina
        if (currentIndex < 0 || currentIndex >= N) 
        {
            return 0;  // Non ciclico
        }
    }

    // Se il ciclo termina senza ritornare all'inizio, il vettore non è ciclico
    return 0;
}
