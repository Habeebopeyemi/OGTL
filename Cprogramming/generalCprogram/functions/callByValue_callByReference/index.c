#include <stdio.h>

void vfun(int, int);
void rfun(int *, int *);
/*call by value: whatever changes we do to the parameter it won't affect the argument*/
void vfun(int x, int y){
    x = 7;
    y = 5;
    printf("call by value --> x = %d, y = %d\n", x, y);
}

/*call by reference: whatever changes we do to the parameter it will affect the argument*/
void rfun(int *x, int *y){
    *x = 8;
    *y = 4;
    printf("call by reference --> x = %d, y = %d\n", *x, *y);

}

void main()
{
    int x = 5, y = 7;
    vfun(x, y);
    rfun(&x, &y);
    printf("calling from main --> x = %d, y = %d\n", x, y);

}