#include <stdio.h>

int my_strlen(const char *param_1){
    int counter = 0;
    while (*param_1 != '\0'){
        ++counter;
        param_1++;
    }

    return counter;
}
/*
int main(){
    const char str[] = "ThE C4k3 Is a L|3";
    printf("%d\n", my_strlen(str));
    return 0;
}
*/