/*
***************
NOTE: this is a simple calculator program use to show the application of function pointer.
***************
*/

#include<stdio.h>
void add(int a, int b) { printf("%d\n", a + b); };
void sub(int a, int b) { printf("%d\n", a - b); };
void mult(int a, int b) { printf("%d\n", a * b); };
void div(int a, int b) { printf("%d\n", a / b); };

void main(){
    int x, y, operator;
    void (*ptr[10])(int, int) = {add, sub, mult, div};
    printf("Please enter your preferred operation number\n");
    scanf("%d", &operator);
    printf("enter the two values a and b\n");
    scanf("%d %d", &x, &y);
    (*ptr[operator])(x, y);
}