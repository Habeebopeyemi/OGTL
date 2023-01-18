#include <stdio.h>

void main(){
    /*
    WILD POINTER: this can be referred to an uninitialized pointer.
    if you dereference this, you will get a garbage value.
    */

    int *p;
    printf("%d\n", *p);
}