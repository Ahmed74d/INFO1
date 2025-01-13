#include<stdio.h>
#define N 5

int main()
{
    int m[N][N];
    int valore = 1; // è la variabile che mi permette di scrivere la matrice come richiesto ovvero da 1 a N la prima riga e poi 
    // ogni riga inizia con il numero di qeullo precedente + 1 e va fino a 2*N , 3*N ecc
    int k, ok, check, r , c;

    // allora a me serve che la matrice aumenta da 1 fino a n^2 quindi in una mat 5x5 sarà 1 a 25 quindi ogni riga devo aumentare
    //fino a 5, 2x5= 10 3x5= 15 ecc
    // come funziona questo ciclo e che idea c'è dietro l'uso di valore cosi? 
    /* praticamente una volta che io nella prima riga ho scritto i numeri da 1 a 5 perché appunto valore parte da 1 e viene 
    aumentato 5 volte nel ciclo interno esce dal ciclo interno ,una volta che j non soddisfa più la condizione j<N ,  
    aumentata di 1 quindi diventa 6 poi entra nel ciclo esterno che diventa 1 ovvero la seconda riga e poi parte da 6 e
    viene quindi viene assegnato alla posizione [1,0] il numero 6 poi viene aumentato 5 volte finché j non sia > o uguale a N 
    e poi si ripete ancora lo stesso ragionamento finché i non sia maggiore o uguale di N */
    for(int i = 0; i < N ; i++)
    {
        for(int j = 0; j < N ; j++)
        {
            m[i][j] = valore; 
            valore++;
        }
    }

    for(int i = 0; i < N ; i++)
    {
        for(int j = 0; j < N ; j++)
        {
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }  
    printf("\n");

    ok = 0; 
    while (!ok) 
    {
        printf("inserisci il numero di pivot:\n");
        check = scanf("%d%d", &r, &c);
        if(check != 2 || r < 0 || r>=N || c < 0 || c >= N)// tutti i casi che possono rendere il pivot invalido
        {// il diverso da 2 significa che l'utente deve inserire giusto 2 numeri ne di meno ne di più 

            printf("\n coordinate non valide , devi inserire coordinate valide \n"); 
            while(getchar() != '\n')
            ;// getchar viene usata per pulire il buffer ogniqualvolta in cui viene inserito un pivot non
        }//valido
        else{
            ok = 1; 
            k = m[r][c];
        }
    }
    printf("\n");
    
    for(int i = 0; i < N ; i++)
    {
        for(int j = 0; j < N ; j++)
        {
            if(i == r && j == c )
            {
                continue;// serve per saltare il resto del codice nel ciclo e non applicare modifiche a questa cella
            }//cosi il numero in c rimarrà invariato
            else if(j == c)// se siamo nella colonna del c
            {
                m[i][j] = 2*k;
            }
            else if(i < r) // tutte le celle nella riga prima di quella del pivot
            {
                if(j != c)// tranne la colonna del elemnto c che è già modificata
                {
                    m[i][j] +=k;// a tutti questi elemnti aggiungo k
                }
            }
            else if(i > r)// stesso ragionamento fi sopra 
            {
                if(j != c)
                {
                    m[i][j] -= k;
                }
            }
            
        }
    }

    printf("la matrice nuova: \n"); //stampo la nuova matrice 
    for(int i = 0; i < N ; i++)
    {
        for(int j = 0; j < N ; j++)
        {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }


 return 0; // che codice di merda :(
}

       