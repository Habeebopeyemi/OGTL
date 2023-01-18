#include <stdio.h>
/*
***************
By default array is parsed by reference and not by value;
***************
*/
int avg(int[], int);

void main(){
    
    int marks[] = {10, 15, 20, 30, 45}, aveg, size;
    size = sizeof(marks) / sizeof(marks[0]);
    aveg = avg(marks, size);
    printf("%d\n", aveg);
}
/*
int avg(int *marks, int size)
*/
int avg(int marks[], int size)
{
    int sum = 0, i, average = 0;

    for (i = 0; i < size; i++){
        sum = sum + marks[i];
    }
    average = sum / size;
    return average;
}