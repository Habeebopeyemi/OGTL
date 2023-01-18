#include <stdio.h>
void sum(int, int);
void sub(int, int);
void display(void (*fptr)(int, int));

void main(){
    display(&sub);
    display(&sum);
    display(sub);
    display(sum);
}

void sum(int a, int b){
    printf("%d\n", a + b);
}

void sub(int a, int b){
    printf("%d\n", a - b);
}
void display(void (*fptr)(int a, int b)){
    (*fptr)(5, 1);
}