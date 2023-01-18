#include <stdio.h>
void main(){
    /*
    ********************
    declaration of 2D array
    ********************
    */

    /*float a[2][7];
    int b[3][4];
    */

    /*
    ********************
    initialization of 2D array.
    At compile time
    ********************
    */

    /*
    int a[2][4] = {1, 2, 3, 1, 5, 6, 3, 4};
    int a[2][4] = {{1, 2, 3, 1}, {5, 6, 3, 4}};
    int a[][4] = {{1, 2, 3, 1}, {5, 6, 3, 4}};
    int a[][4] = {{1, 2, 3}, {5, 6, 3}};
    */

    /*
    ********************
    initialization of 2D array.
    At run time
    ********************
    int a[2][4], i, j,sum = 0;
    printf("Enter the elements in the 2D data set\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++){
            scanf("%d", &a[i][j]);
        }
    }
    */


    /*
    ********************
    Program to print 2D array and calculate sum
    ********************
    */

    int a[2][4], i, j,sum = 0;
    printf("Enter the elements in the 2D data set\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("\nThe total summation of the 2D array is: %d\n", sum);
}