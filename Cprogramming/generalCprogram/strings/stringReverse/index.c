#include <stdio.h>
#include <string.h>

void main(){
    /*
    *****************
    strrev --> this is the predefined function contain in the string.h file
                which is used for reversing string.  
    *****************
    */
   /*
    char name[] = "temitope";
    strrev(name);
   */

    /*
    recall name is a pointer to the string, the above code might give
    error because is strrev is an old method of reversing string.
    */

     /*
    *****************
    A program to reverse a string without predefined function.
    *****************
    */

    int length, i;
    char name[] = "temitope", ch;
    length = strlen(name);
    for (i = 0; i < length / 2; i++){
        ch = name[length - 1 - i];
        name[length - 1 - i] = name[i];
        name[i] = ch;
    }
        printf("%s", name);
}