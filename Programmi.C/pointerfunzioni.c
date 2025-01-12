#include<stdio.h>

void cambiavalore(int* num);
int* find_square(int* num);

int main()
{
    int number = 87;
    cambiavalore(&number);
    printf("%d\n", number);

    int* a = find_square(&number);
    printf("the square is : %d\n", *a);
    printf("\n");
    return 0; 

}

void cambiavalore(int* num)
{
    *num = 39;
}

/*void find_square(int* num)
{
    int square;
    square = *num * *num;
    *num = square;

}*/

int* find_square(int* num)
{
    int square;
    square = *num * *num;
    *num = square; 
    return num;
}