#include <stdio.h>
/*function declaration*/
void sum(void);
/*function declaration with parameter*/
void mult(int, int);
/*function definition*/
void sum()
{
    int a, b, sum;
    printf("Enter two number:\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
}

void mult(int x, int y)
{
    int multiply = x * y;
    printf("mult = %d\n", multiply);
}
void main(){
    /*function calling */
    sum();
    /*passing argument to function*/
    mult(5, 4);
}