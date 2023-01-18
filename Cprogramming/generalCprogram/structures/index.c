#include <stdio.h>
struct biodata
{
    /* data */
    int age;
    char name[20];
    float marks;
}s1,s3={28, "mubarak", 90.0},s5, s7;

void main(){
    struct biodata s2 =
    {
        /* data */
        24, "habeeb", 99.9
    };
    // parial initialization
    /*
    by default the string will be initialized to null(\0)
    while the float will be initialized to zero
    */
    struct biodata s4 =
    {
        /* data */
        20
    };
    // struct biodata s6;
    // s6.age = 34,
    // s6.name = "Oloruntobi",
    // s6.marks = 100.0;

    printf("enter info for s5\n");
    // runtime initialization
    scanf("%d %s %f", &s5.age, s5.name, &s5.marks);

    // this is possible bcos s1 and s2 are of the same type
    s1 = s2;

    s7.age = 4;
    // this is giving issue, i will research more on it.
    // s7.name[20] = (char *)"opeoo";
    s7.marks = 6.3;
    printf("%d \t %s \t %0.2f\n", s2.age, s2.name, s2.marks);
    printf("%d \t %s \t %0.2f\n", s1.age, s1.name, s1.marks);
    printf("%d \t %s \t %0.2f\n", s3.age, s3.name, s3.marks);
    printf("%d \t %s \t %0.2f\n", s4.age, s4.name, s4.marks);
    printf("%d \t %s \t %0.2f\n", s5.age, s5.name, s5.marks);
    printf("%d \t %s \t %0.2f\n", s7.age, s7.name, s7.marks);


}