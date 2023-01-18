/*
**
** QWASAR.IO -- my_range
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int*}
**
*/
#include <stdio.h>
#include <stdlib.h>
int* my_range(int param_1, int param_2)
{
    int *p, i;
    p = (int *)malloc(sizeof(int)*(param_2 * param_1));
    for(i = 0; i < param_2; i++){
        p[i] = i + param_1;
    }
    return p;
    
    free(p);

}

void main(){
    int *range;

   range = my_range(1, 4);

    while(*range++){
        printf("%d\n", *range);
    }

}