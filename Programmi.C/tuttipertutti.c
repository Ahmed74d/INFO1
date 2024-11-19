#include<stdio.h>

int main()
{
    int n , k;
    int t = 2;
    printf("inserisci 2 numeri : \n"); 
    scanf("%d %d", &n, &k); 

   /* int col = 0 ;
    printf("  "); 
    while (col<=k)
        {
            printf("%4d", col);
             col++;
        }
        printf("\n");
    col = 0 ;
    printf("  ");    
    while (col<=k )
    {
        printf("---");
        col++;
    }

    printf("\n"); 
    while (t <= n)
    {
        printf("%2d : ",t);
        int b = 0 ;
        while (b <=k)
        {
            printf("%4d", t * b); 
            b++;
        }
        printf("\n");
        t++;
    }
    */
    int b = 0;
   while (b <=k)
   {
    printf("%4d", b);
    b++;
   }
   printf("\n");

    while(t<=n)
    {
        printf("%d\n", t);
        t++;

    }
    printf("\n");

   while (t<=n)
   {
    printf("%d\n", t);
    
    int b = 0;
    while (b<=k)
    {
        printf("%4d", t * b);
        b++;
    }
    t++;
   }

    return 0;
}