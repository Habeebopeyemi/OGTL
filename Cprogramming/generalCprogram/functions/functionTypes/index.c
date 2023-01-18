#include <stdio.h>

/*no argument, no return type*/
void sum(void);
/*no argument, with return type*/
int adder(void);
/*with argument, no return type*/
void add(float, float);
/*with argument, with return type*/
int summation(int, int);

void main(){
    int addedValue, sumer;
    float x, y;
    sum();
    addedValue = adder();
    printf("added value --> %d\n", addedValue);
    printf("enter the two operands\n");
    scanf("%f %f", &x, &y);

    add(x, y);
    sumer = summation(x, y);
    printf("The sum output is --> %d\n", sumer);
}

void sum(){
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    printf("sum = %d\n", sum);
}

int adder(){
    int a = 5, b = 7;
    return a + b;
}
void add(float a, float b){
    float sum = 0;
    sum = a + b;
    printf("summation is --> %f\n", sum);
}
int summation(int a, int b){
    return a + b;
}