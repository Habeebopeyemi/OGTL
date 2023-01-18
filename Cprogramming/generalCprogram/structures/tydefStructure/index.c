#include <stdio.h>
/*
***************
Declaring a variable like struct is long and using it is the same,
hence i would like to shorten it.
***************
*/

typedef struct Biodata
{
    /* data */
    int age;
    char name[40];
    float marks;
}biodata;

void main(){
    biodata yusuph = {24, "ope", 99.9};

    printf("%d\t%s\t%f", yusuph.age, yusuph.name, yusuph.marks);
}