#include <stdio.h>
void main(){
    /*
    ********************
    Initialization of a string
    At compile time
    ********************
    */

    /*
        char name[10] = "opeyemi";
        char name2[] = {'h', 'a', 'b', 'e', 'e', 'b', '\0};
    */

     /*
    ********************
    Initialization of a string
    At run time.

    Downside of using scanf to get string value at run time is that,
     it will store the string until a space is inserted. see below for example.
     To make up for the downside of scanf you should use gets, see below for
     example also.

     The downside of both scanf and gets is Buffer overflow:
     a situation whereby, printf or scanf automatically assign memory,
      to excess character outside the declared size of the string, which is 
      a dangerous behaviour, as this can erase some important content stored in the 
      memory of the system.

    scanf("%5s", s1) --> this will read only 5 characters from all the input string
    ********************
    */

    /*
    char s1[10];
    printf("Enter your text\n");
    scanf("%s", s1);
    printf("%s\n", s1);
    */

   /*
  
    char s1[20]; 
    printf("Enter your text\n");
    gets(s1);
    printf("%s\n", s1);
   */

    /*
    ********************
    Explanation on printing of string using printf and puts

    printf("%s", s1) --> this is use to print out the total string
    printf("%.5s", s1) --> this is gonna print the first 5 character of the string
    printf("%10.5s", s1) --> this is gonna give a total of 10 filled width for the strings, but the main
                            characters of the string that will be printed is 5 and it will be right shifted.

    puts(s1) --> is contained in the stdio.h file, and this function automatically add a new line at the 
                    end of the characters
    ********************
    */

     /*
    ********************
    A program to print some part of a string using printf
    ********************
    */
    /*
    char name[7] = "habeeb";
    printf("%s\n", &name[2]);
    */
}