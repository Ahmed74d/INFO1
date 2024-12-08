#include<stdio.h>

int main()
{
    char str[20];
    printf("inserisci il tuo nome: \n");
    fgets(str , sizeof(str), stdin); //non si feram appena che vede uno spazio 
    //scanf("%s", str); si ferma appena che vede uno spazio 
    printf("%s\n", str); 

    str[0] = 'x';
    printf("il nome modificato è %s", str);

    return 0; 
}