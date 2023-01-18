#include <stdio.h>
/*NO: 1*/
/*
int jumble(int, int);

int main(){
    int x = 2, y = 5;
    y = jumble(y, x);
    x = jumble(y, x);

    printf("%d\n", x);
    return 0;
}

int jumble(int a, int b){
    a = 2 * a + b;
    return a;
}
*/

/*NO: 2*/

/*
int incr(int i){
    static int count = 0;
    count = count + i;
    return (count);
}

void main(){
    int i, j;
    for (i = 0; i <= 4; i++){
        j = incr(i);
    }
    printf("%d\n",j);
}
*/

/*NO: 3*/

/*
int r(){
    static int num = 7;
    return num--;
}

int main(){
    for (r(); r(); r()){
        printf("%d\n", r());
    }

    return 0;
}
*/

/*N0 4:*/

/*
void f(int *p, int m){
    m = m + 5;
    *p = *p + m;
    return;
}

void main(){
    int i = 5, j = 10;
    f(&i, j);
    printf("%d\n", i + j);
}
*/

/*N0 5:*/
void f(int *p, int *q)
{
    p = q;
    *p = 2;
}

int i = 0, j = 1;

int main()
{
    f(&i, &j);
    printf("%d %d\n", i, j);
    getchar();
    return 0;
}