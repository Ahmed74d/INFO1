#include <stdio.h>
#include <math.h>

float cercaRadice(float b );
float calcoloPotenza( float b , float a);

int main()
{
    float m;  
    printf("inserisci il numero di cui vuoi la radice quadrata: \n");
    scanf("%f", & m); 
    float f = cercaRadice(m);
    printf("la radcie quadrata di %f e' %.2f\n", m , f); 
  
  printf("the power of the 2 numbers is : \n");

  float result = calcoloPotenza(m, f);
  printf("the result is %.2f\n", result);
    return 0 ;
}

float cercaRadice(float b )
{
      return sqrt(b); 
}

float calcoloPotenza(float b , float a)
{ 
   return pow(b, a);
}

