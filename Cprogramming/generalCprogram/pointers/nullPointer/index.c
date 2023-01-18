#include <stdio.h>
void main(){
    /*
    ***************
    NULL POINTER: this is a pointer that can be used to initialize a pointer to zero, but cannot be deferenced.
    NULL in itself is a pointer, pointing to 0; NULL --> 0;
    NOTE: it does not point to any valid memory address, also while initializing with a null pointer,
        it best to put a check before deferencing.
    ***************
    */
    int a = 5;
    float b = 1.11;
    char c = '0';

    int *np = NULL;

    np = &a;
    if(np == NULL){
        printf("this is a NULL pointer\n");
    }
    else
    {
        printf("%d\n", *np);
    }
}