#include <stdio.h>
/*
*****************
uncommenting the pragma directory enables paxking
*****************
#pragma pack(1)
*/

typedef struct Biodata
{
    /* data */
    char a;
    int b;
    char c;
} biodata;

typedef struct Biodata2
{
    /* data */
    char c;
    char a;
    int b;
} biodata2;

typedef struct Biodata3
{
    /* data */
    char a;
    int b;
    double c;

} biodata3;

void main(){
    biodata b1;
    biodata2 b2;
    biodata3 b3;
    printf("%ld %ld %ld\n", sizeof(b1),sizeof(b2),sizeof(b3));
}