#include <stdio.h>

int main ()
{
    int a = -1 ;
    int pre = 1;
    int att = 1;
    int somma;  
    

  while(a <= 0) // non posso usare if pk se no non mi stamperà il numero ma non si ferma poi a quel punto invece 
  // andrà a stampare quello che c'è dopo ovvero 1 1 
  {
    printf("inserisci un numero intero positivo\n");
    scanf("%d", &a);
  }
  
  if (a == 1)
  {
    printf("1");
  } 
  else
  {
    printf("1 1 "); 
     while ( a > 2)
  {
    somma = pre + att ;
    printf("%d ", somma); 
    a--;
    pre = att ; 
    att = somma; 

  }
}
printf("\n");

  return 0; 
}