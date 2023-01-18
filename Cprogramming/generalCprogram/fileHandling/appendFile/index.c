#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD 100

void main(){
    FILE *fp = NULL;
    char str[MAX_WORD];

    fp = fopen("../abc.txt", "a");

    if(fp == NULL){
        printf("Error: file doesn't exist");
        exit(1);
    }

    printf("Enter the content you want to append\n");
    gets(str);

    fprintf(fp, "\n %s", str);

    printf("Successfully appended\n");

    fclose(fp);
}