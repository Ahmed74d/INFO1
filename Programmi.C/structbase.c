#include<stdio.h>

typedef struct person{
    int age;
    double salary; 
}person;

int main()
{
    //struct person person1;// troppo lungo allora posso usare una typedef ovvero cosi;
    person person1;

    // in alternativa posso fare cosi struct person person1 = {.age= 65, .salary = 839.34};
    person1.age = 65;
    person1.salary = 675.85;

    printf("perosne1 age: %d\n", person1.age);
    printf("perosn1 salary: %.2lf\n", person1.salary);

    return 0;
}
