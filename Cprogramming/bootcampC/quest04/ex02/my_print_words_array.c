/*
**
** QWASAR.IO -- my_print_words_array
**
** @param {string_array*} param_1
**
** @return {void}
**
*/
#include <stdio.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

void my_putstr(char* param_1){
    for (int i = 0; param_1[i] != '\0'; ++i){
        putchar(param_1[i]);
    }
}

void my_print_words_array(string_array* param_1)
{
    int i;
    for(i = 0; i < param_1->size; i++){
        my_putstr(param_1->array[i]);
        putchar(10);

    }
}

// void main(){
//     char str[30] = {'a', 'b'};

//     // string_array strings = {2, words};


//     printf("%c", str[0]);

// }
