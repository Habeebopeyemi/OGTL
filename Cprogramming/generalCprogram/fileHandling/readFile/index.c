#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD 100

void main(){
    FILE *fp = NULL;
    char ch, str[MAX_WORD];

    fp = fopen("../abc.txt", "r");

    if(fp == NULL){
        printf("error!, file doesn't exist");
        exit(1);
    }
    
    /*
    ch = fgetc(fp);
    printf("%c", ch);
    */

    /*
    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c", ch);
    }
    */

    /*
    fgets(str, MAX_WORD, fp);
    printf("%s", str);
    */

    // while(!feof(fp)){
    //     fgets(str, MAX_WORD, fp);
    //     printf("%s", str);
    // }

    fclose(fp);
}