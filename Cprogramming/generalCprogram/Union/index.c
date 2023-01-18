#include <stdio.h>

union data
{
    /* data */
    int age;
    char code;
    float digit;
};

void main(){
    union data d1;
    union data *ptrd1 = &d1;

    d1.age = 24;
    ptrd1->code = 'c';
    d1.digit = 45.3;

    printf("%d\t%c\t%f\n", d1.age, d1.code, d1.digit);
    printf("%d\t%c\t%f\n", ptrd1->age, (*ptrd1).code, ptrd1->digit);

}