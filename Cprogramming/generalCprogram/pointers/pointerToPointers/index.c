#include <stdio.h>
void main(){
    /*
    ********************
    pointer to pointer(double pointer): is a variable that store the address of another pointer.
    **
    ********************
    */

    int a = 10;
    int *pa = &a;
    int **qpa = &pa;


    printf("a = %d %d %d\n", a, *pa, **qpa);
}