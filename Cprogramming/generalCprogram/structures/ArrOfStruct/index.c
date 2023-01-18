#include <stdio.h>

struct student
{
    /* data */
    int rollno;
    char name[20];
    float marks;
};

void main(){
    struct student students[3];
    int i,j;
    for (i = 0; i < 3; i++){
        printf("enter the details of student number: %d\n", i);
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    for (j = 0; j < 3; j++){
        printf("%d\t%s\t%f\n", students[j].rollno, students[j].name, students[j].marks);
    }
}