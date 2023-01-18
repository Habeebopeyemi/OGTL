#include <stdio.h>

struct student
{
    /* data */
    int rollno;
    char name[20];
    float marks;
};

void main(){
    /*
    struct student yusuph =
    {
        2, "adekunle", 80.3
    };
    */
    struct student yusuph;
    struct student *pyusuph = &yusuph;
    /*TODO task*/
    printf("enter the details of the student\n");
    scanf("%d %s %f", &pyusuph->rollno, pyusuph->name, &pyusuph->marks);

    printf("rollno is : %d, name is : %s and mark is : %f\n", pyusuph->rollno, pyusuph->name, pyusuph->marks);
    printf("rollno is : %d, name is : %s and mark is : %f\n", (*pyusuph).rollno, (*pyusuph).name, (*pyusuph).marks);

}