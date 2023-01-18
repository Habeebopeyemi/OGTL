#include <stdio.h>
#include <ctype.h>

char* my_downcase(char* param_1){
    for (int i = 0; param_1[i] != '\0'; ++i){
        putchar(tolower(param_1[i]));
    }
    putchar('\n');
}

int main(){
    my_downcase("habeeB");
    return 0;
}