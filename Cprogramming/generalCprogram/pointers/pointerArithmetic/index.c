#include <stdio.h>
void main(){
    /*
    *******************
    Pointer arithmetic (Addition)
    NOTE: you cannot perform any arithmetic operation with two pointer.
    but, you can add any numbers to pointer variable.

    relationship:
    pointer (p) + number (n) = address stored in p + n * size of datatype.

    This concept can be useful when dealing with array.
    *******************
    */
   /*
   
    int marks[5] = {0, 1, 2, 4, 7};
    int *pmarks = &marks;
    *pmarks = 2;
    printf("%d, with the address, %u\n", *pmarks, pmarks);
    pmarks = pmarks + 1;
    printf("%d, with address %x, and %u in decimal\n", *pmarks, pmarks, pmarks);
   */

    /*
    *********************
    Subtraction:
    NOTE: you can perform subtraction operation with two pointers, and also any number

    relationship:
    pointer (p) - number (n) = address stored in p - n * size of datatype.
    pointer (p) - pointer(q) = (p - q)/size of datatype --> integer value
    *********************
    */
    /*
    int marks[5] = {0, 1, 2, 4, 7}, d;
    int *pmarks = &marks[0];
    int *qmarks = &marks[3];
    d = qmarks - pmarks;
    */

    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    q = &a[0] + 3;
    printf("%u %d %u %d %u %d %u %d %u\n", p, *p++, p, (*p)++, p, (*p)++, p, *(++p), p);
    printf("%d\n", *p);
    printf("%d\n", (*p)++);
    printf("%d\n", (*p)++);

    q--;

    printf("%d\n", (*(q + 2))--);
    printf("%d\n", *(p + 2) - 2);
    printf("%d\n", *(p++ - 2) - 1);
}