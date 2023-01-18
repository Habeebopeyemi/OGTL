/*
this section shows how to return a pointer from function
*/
#include <stdio.h>

int *returnPointer(int[]);

void main(){
    int *p;
    int a[] = {1, 2, 3, 4, 5};
    /*
    ********************
    Recall: this next line of code will not work,
    because a is a constant pointer which cannot be modified
    ********************
    a = a = 2
    */
    p = returnPointer(a);
    printf("%d\n%u\n", *p, p);
}

int *returnPointer(int param[])
{
    param = param + 2;
    return param;
}