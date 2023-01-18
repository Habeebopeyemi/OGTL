#include <stdio.h>

void calculatorHandler(char p, int q, int r){
    int result;
    switch (p)
    {
        case '+':
            /* code */
            result = q + r;
            printf("result = %d\n", result);
            break;
        case '-':
            /* code */
            result = q - r;
            printf("result = %d\n", result);
            break;
        case '*':
            /* code */
            result = q * r;
            printf("result = %d\n", result);
            break;
        case '/':
            /* code */
            result = q / r;
            printf("result = %d\n", result);
            break;

        default:
            printf("Enter a valid operator");
            break;
    }
}

void main(){
    int a, b;
    char operator;
    printf("Enter operator\n");
    scanf("%c", &operator);
    printf("Enter two operands\n");
    scanf("%d %d", &a, &b);
    calculatorHandler(operator, a, b);
}