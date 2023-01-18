/*
*************
in r+ mode, you can read and write
NOTE: you can choose to write at any
position of your choice, be it at the
beginning, middle and end.
BUT: if file doesn't exist, it will not
create a new file. which makes it different
from ordinary write (w) mode. 
r+ mode = MODIFY
*************
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD 100

void main(){
    FILE *fp = NULL;
    char str[MAX_WORD];

    fp = fopen("../abc.txt", "r+");

    // write operation
    if(fp == NULL){
        printf("Error: file does not exist\n");
        exit(1);
    }else{
        fputs("checking flow... ", fp);
        printf("Insertion successful");
        fclose(fp);
    }

     // read operation

    fp = fopen("../abc.txt", "r+");

    while(!feof(fp)){
        fgets(str, MAX_WORD, fp);
        printf("%s", str);
    }

    fclose(fp);
}