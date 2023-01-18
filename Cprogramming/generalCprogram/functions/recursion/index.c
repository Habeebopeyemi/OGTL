#include <stdio.h>

void display(int n){
    if(n < 1){
        return;
    }else{
        printf("%d", n);
        display(n - 1);
        printf("%d", n);
    }
}

int sum(int x){
    int s = 0;
    if(x == 1){
        return x;
    }else{
        s = x + sum(x - 1);
        return s;
    }
}
/*
******************
Tail and Non Tail recursion.
NOTE: rather than to use tail recursive function, it is better to use
loop, because the time complexity of both loop and tail recursion, will
be the same but space complexity of loop will be D(1), while tail recursion
will be D(n)
******************

*/
void count(int n){
    static int d = 1;
    printf("%d\n", n);
    printf("%d\n", d);
    d++;
    if (n > 1)
        count(n - 1);
    printf("%d\n", d);
}

void main(){
    int a;
    /*
    display(4);
    a = sum(4);
    */

    count(3);

    printf("%d\n", a);
}