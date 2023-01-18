#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD 100

void main(){
    FILE *fp = NULL;
    char str[MAX_WORD];

    fp = fopen("../abc.txt", "w+");

    if(fp == NULL){
        printf("Error: file does not exist\n");
        exit(1);
    }

    fputs("new input from write plus\n", fp);

    rewind(fp); 

    while(!feof(fp)){
        fgets(str, MAX_WORD, fp);
        printf("%s", str);
    }

    fclose(fp);
}