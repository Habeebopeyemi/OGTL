#include <stdio.h>
#include <unistd.h>

void my_putstr(char* param_1){
    for (int i = 0; param_1[i] != '\0'; ++i){
        putchar(param_1[i]);
    }
}
/*
int main(){
    char str[] = "habeeb";
    my_putstr(str);
    return 0;
}
*/