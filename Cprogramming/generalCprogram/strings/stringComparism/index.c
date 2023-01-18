#include <stdio.h>
#include <string.h>

void main(){
     /*
    ********************
    using predefined function from string.h
    strcmp is use for comparing two string. and it return an integer (0, +ve, -ve)
    0 --> the two string are the same
    +ve --> when the first char that doesn't match is greater in string 1
    -ve --> when the first char that doesn't match is less in string 1

    ********************
    */

    /*
    demo with predefined function
    */

    /*
     int value;
     char s1[] = "hello";
     char s2[] = "welcome";

     value = strcmp(s1, s2);

     if(value == 0){
         printf("same");
     }else if(value > 0 ){
         printf("positive");
     }else{
         printf("negative");
     }
    */

      int flag = 0, i;
     char s1[] = "hello";
     char s2[] = "wel";
    /*
     for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    */
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
     {

         if (s1[i] != s2[i])
         {
             flag = 1;
             break;
         }
     }

     if (flag == 1){
             printf("Not the same");
         }
         else
         {
             printf("same");
         }
}