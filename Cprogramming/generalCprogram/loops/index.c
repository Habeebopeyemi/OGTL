#include <stdio.h>

void main(){
    /*
        for loop examples
        the code will not execute if the provided condition is not met.
        This is an entry controlled loop.
        used when you know the number of iteration.
    */
    /*
    int i;
    for (i = 0; i < 10; i++){
        printf("%d\n", i);
    }
    */
   /*
    int i = 0;
    for(; i < 10; i++){
        printf("%d\n", i);
    }
   */
        /*
    int i, j;
    for (i = 0, j = 10; i < 7, j > 0; i++, j--){
        printf("i = %d and j = %d\n", i, j);
    }

   
       getc();
        */

    /*
        While loop examples
        the code will not execute if the provided condition is not met.
        This is an entry controlled loop.
        used when you don't know the number of iteration.
    */

   /*
   int i = 1;
   while(i <= 10){
       printf("%d\n", i);
       i++;
   }
   printf("The final value of i = %d\n", i);
   */

    /*
       do-While loop examples
       the code will be executed at least once, even if the stipulated condition is not met.
       This is an exit controlled loop.

       int i = 10;
       do{
        printf("%d\n", i);
        i--; 
       } while (i > 0);
    */
   /*
   ***************
   OUTPUT LOOKS LIKE THIS:
    *
    **
    ***
    ****
    *****
    END
   ***************

    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i; j++){
            printf("*");
        }
        putchar('\n') || printf("\n");
    }
   */
}