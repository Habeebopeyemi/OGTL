#include <stdio.h>
#include <stdlib.h>

int *fun(){
    int a = 10;
    return &a;
}
void main(){
    /*
    ***************
    DANGLING POINTER: This is a pointer pointing to a already free memory location
    ***************
    */
   /*INSTANCE 1*/

   /*Dynamic memory allocation* to the pointer*/
    int  *ptr = (int *)malloc(sizeof(int)), *dptr;

    /*INSTANCE 2*/

    int *fptr = fun();
    /*storing value to the allocated memory*/
    *ptr = 10;

    /*accessing the data stored in the memory*/
    printf("%d\n", *ptr);
    /*i want free the memory allocated to the pointer*/
    free(ptr);

    /*Now, pointer ptr has become a dangling pointer, and if we try
    accessing value stored in it, we will get a gabbage value.*/
    printf("%d\n", *ptr);

    /*to prevent this type of scenario, then after freeing the memory,
    you can assign NULL pointer to ptr, also note NULL pointer cannot be dereferenced*/
    ptr = NULL;
    printf("%ls\n", ptr);
    /*the next line will give error, saying:
    function returns the address of local variable
    
    
    printf("%u\n", *fptr);
    */

    /*INSTANCE 3*/

    {
        int b = 9;
        dptr = &b;
        printf("%d\n", *dptr);
    }

    /*if you try to print the value of dptr outside the above block, the you will get error.*/
}