#include <stdio.h>
#include <string.h>
/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

char* my_strchr(char* param_1, char param_2)
{
    int index = 0, i;
    for (i = 0; param_1[i] != '\0'; i++){
        if(param_2 == param_1[i]){
            index = i;
        }
    }
    while (*param_1++)
    {
        int j = 0;
        printf("%c\n", *param_1);
        printf("%c %d\n", param_1[index - 1], j);

        if (j == index)
        {
            return param_1;
        }

        j++;
    }
}

int main() {
  char dst[100] = "abcabc";
  char src = 'b'; 
  printf("my_strcpy -> %s\n", my_strchr(dst, src));
/*
  char *pdst = dst;
  pdst++;
  if(src == *pdst)
    printf("%s\n", pdst);
*/
  return 0;
}