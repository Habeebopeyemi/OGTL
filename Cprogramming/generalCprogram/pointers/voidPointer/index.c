#include <stdio.h>
void main(){
    /*
    ***************
    VOID POINTER: this is a pointer that can store the address of any data type
    NOTE: to get the value of data stored in the address contained by the
          void pointer, you need to typecast it into the datatype of the 
          corresponding data.
          let's see it in practical
    ***************
    */
    int a = 5;
    float b = 1.11;
    char c = '0';

    void *vp;

    vp = &a;
    printf("%d\n", *(int *)vp);

    vp = &b;
    printf("%f\n", *(float *)vp);

    vp = &c;
    printf("%c\n", *(char *)vp);
}