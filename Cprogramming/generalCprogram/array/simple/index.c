#include <stdio.h>
#define N 5

void main(){

    /*
    int b;
    int a[b = 11 / 2];
    printf("%d", a);
    */

    /*
    *********************

    using of MACROS is allowed also as in symbolic constant.
    when you're trying to print out the array e.g int, you can't use %d instead you will
    %ls (long signed int), to access the entire array as a whole, but %d is allowed while you want to access 
    just a single element of the array, since the MACROS is corresponding to a pointer, pointing to the actual value.

    *********************
    */

    /*
        int a[N];
        printf("%ls", a);
    */

    /*
    ****************
    Compile time initialization.
    Best use when data to be inserted into the array is not many.
    ****************
    */

    /*
    int a[N] = {1,2,3,4};
        printf("%d\n", a[4]);
    */

    /*
    ****************
    Run time initialization.
    Best use when data to be inserted into the array is many
    ****************
    */

}