#include <stdio.h>
#include <string.h>

void main(){

     /*
    ********************
    using predefined function from string.h
    strlen function takes in a pointer to the character string and return unsigned int
    ********************
    */

    /*
     char name[30];
     int count = 0;
     printf("Enter name");
     gets(name);
     printf("%u",strlen(name));
     count = strlen(name);
     printf("%d", count);
    */

     /*
    ********************
    getting the length of char string without predefined function
    ********************
    */

     char name[30];
     int count = 0, i = 0;
     printf("Enter name\n");
     gets(name);

     while(name[i] != '\0'){
         count++;
         i++;
     }

    printf("%d", count);

}