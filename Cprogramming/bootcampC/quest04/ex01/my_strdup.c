/*
**
** QWASAR.IO -- my_strdup
**
** @param {char*} param_1
**
** @return {char*}
**
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* my_strdup(char* param_1)
{
    char *p;
    int i,len = strlen(param_1);
    p = (char *)malloc(sizeof(char)*len);
    for(i = 0; i < len; i++){
        p[i] = param_1[i];
    }
    return p;
}
void main(){
    char str[20] = "name";
    char *range;

    range = my_strdup(str);

    printf("%s\n", range);
}