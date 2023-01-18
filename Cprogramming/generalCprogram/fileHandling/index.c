#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fp = NULL;
    char ch= 'a';
    char str[10] = "opeyemi";

    fp = fopen("abc.txt", "w");

    if(fp == NULL){
        printf("file does not exist and there was issue creating one\n");
        exit(1);
    }

    // fputc(ch, fp);
    // fputs(str, fp);
    fprintf(fp,"my name is %s, am %c man,\n and am a software developer,\n from lagos nigeria", str, ch);

    fclose(fp);
}