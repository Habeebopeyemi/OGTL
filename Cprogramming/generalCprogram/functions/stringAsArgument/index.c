#include <stdio.h>
/*
***************
By default string is parsed by reference and not by value;
***************
*/

void modify(char[], char[]);
char *display(void);
char *displayX(void);
char *displayY(void);
const char *displayZ(void);
/*
char *displayZ(void);
*/


void main(){
    char str1[] = "opeyemi";
    char str2[] = "habeeb";
    char *str, *strX, *strY;
    /*, *strZ*/
    const char *strZ;
    modify(str1, str2);
    str = display();
    strX = displayX();
    strY = displayY();
    strZ = displayZ();
    /*
    ******************
    if the code below is uncommeneted, then you will get segmentation,
    fault error.
    strX[0] = 'K';
    for the modification below, if it is uncommented, you will get,
    assignment of read-only location as error
    strZ[0] = 'F';
    */
    strY[0] = 'D';

    printf("%s\n%s\n%s\n%s\n", str, strX, strY, strZ);
}

void modify(char *str1, char *str2){
    int i, length = 0;
    for (i = 0; str1[i] != '\0'; i++){
        length++;
    }

    printf("Length of 1st string is %d\n", length);

    str2[2] = 'z';
    printf("%s %s\n", str1, str2);
}

char *display(){
    /*
    ***********
    NOTE: this will return a pointer containing the base
    address of string habeeb. which is stored in a read-only memory
    ***********
    */
    return "habeeb";
}
char *displayX(){
     /*
    ***********
    NOTE: this will return a pointer containing the base
    address of string habeeb. which is stored in the stack memory of displayX function.
    Once the function is called and it returns, the char str[], will be destroyed.
    hence if it is printed in the main function, it will output null.
    error: function returns address of local variable.
    ***********
    */
    char str[] = "habeeb";
    return str;
}

char *displayY(){
         /*
    ***********
    NOTE: the issue experienced in displayX function, can be fixed,
    by making str a static variable i.e the char str will be available throught
    the program runtime.
    NOTE: this is modifiable in the main
    ***********
    */
    static char str[] = "habeeb static";
    return str;
}
/*
char *displayZ()
*/
const char *displayZ()
{
         /*
    ***********
    NOTE: the issue experienced in displayX function, can be fixed,
    by declaring str as a pointer, pointing to the base address od the string,
    and this is going to be stored in the heap memory.
    also note that, this can't be modified, as it is from read-only, memory.
    hence you can add const, so that it be easily seen as non-modifiable. 
    ***********

    char *str = "habeeb heap";
    */
    const char *str = "habeeb heap";

    return str;
}