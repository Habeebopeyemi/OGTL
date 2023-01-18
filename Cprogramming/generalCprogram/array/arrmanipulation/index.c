#include <stdio.h>

#define N 5

int getLength(int param[]){
        int length = 0, index = 0;
        while(param[index] != '\0'){
            length++;
            index++;
        }

        return length;
    }

int getSum(int param[]){
    int sum = 0,
    index = 0;
    while (param[index] != '\0'){
        sum += param[index];
        index++;
    }
    return sum;
}

float getAverage(int sum, int length){
    return sum / length;
}


void main(){

    /*
    **************
    A program showing how to dynamically assign data to an array at runtime
    **************
    */

    /*
    int arr1[N], i;
    printf("Enter the element of the data set\n");

    for (i = 0; i < N; i++){
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < N; i++){
        printf("The data item at index %d, is %d\n", i, arr1[i]);
    }
    */

     /*
    **************
    A program showing how to calculate sum and average of an array
    **************
    */
    /*
    Compile time initialization approach
    */

    /*
    int marks[N] = {3, 5, 6, 7, 8}, length, sum;
    */

    /*
    Run time initialization approach
    */

    int marks[N], length, sum;
    float avg;

    printf("Enter the data set values\n");

    for (int i = 0; i < N; i++){
        scanf("%d", &marks[i]);
    }

    length = getLength(marks);
    sum = getSum(marks);
    avg = getAverage(sum, length);

    printf("The total element in the data set is: %d\n", length);
    printf("The summation of the elements is: %d\n", sum);
    printf("The average of the elements is: %f\n", avg);
}