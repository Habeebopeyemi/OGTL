#include <stdio.h>

void main(){
    /*
    ***********************
    pointer is a derived data type:
    A pointer points to the address of another variable

    size of pointer depends on the machine:
    on 32bit machine --> 2 byte
    on 64bit machine --> 4 byte

    & --> address of operator
    * --> indirection or dereferencing operator
    ***********************
    */

   /*simple declaration of a pointer*/
    int id = 4;
    float litres = 12.6;
    int *pid = &id;
    float *plitres = &litres;

    /*
    --> how to print value stored in a
    --> how to print value stored in a using dereferencing operator
    --> how to print the address of a
    --> how to print the address of a using the pointer variable
    --> how to print the address of the pointer itself
    */

    /*
    printf("id = %d\n", id);
    printf("id = %d\n", *pid);
    printf("address of id = %x\n", &id);
    printf("address of id = %x\n", pid);
    printf("address of pid = %x\n", &pid);
    */

    int c = *plitres;
    *pid = 20;
    printf("address of id = %d\n", c);
    printf("id = %d\n", id);
    printf("address of id = %x\n", pid);


}