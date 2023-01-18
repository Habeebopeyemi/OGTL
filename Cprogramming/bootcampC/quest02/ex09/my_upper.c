#include <stdio.h>
#include <ctype.h>

char* my_uppercase(char* param_1){
    for (int i = 0; param_1[i] != '\0'; ++i){
        putchar(toupper(param_1[i]));
    }
    putchar('\n');
}

int main(){
    my_uppercase("habeeb");
    return 0;
}
