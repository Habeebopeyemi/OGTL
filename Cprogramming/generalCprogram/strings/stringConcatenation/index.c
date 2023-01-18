#include <stdio.h>
#include <string.h>
void main(){
     /*
    ********************
    using predefined function from string.h
    strcat is use for concatenating two string.
    strncat is accept 3 arguments, dstination, source and number of char to be concatenated.

    Downside of using strcat is also Buffer overflow, because
    it doesn't check the size of the destination array before
    appending the source array to it.

    NOTE: vscode gcc compiler will give a stack smashing error, if
    the size of the destination array is smaller than that of the source array.
    ********************
    */

     char s1[20] = "habeeb";
     char s2[8] = "opeyemi";
    /*
     strcat(s1, s2);
     strncat(s1, s2, 5);

     printf("%s", s1);
    */

    /*
    *********************
    concatenation without the use of predefined function
    *********************
    */

     int i, lens1, lens2;
     lens1 = strlen(s1);
     lens2 = strlen(s2);

     for (i = 0; i <= lens2; i++){
         s1[lens1+i] = s2[i];
     }

     printf("%s", s1);
}