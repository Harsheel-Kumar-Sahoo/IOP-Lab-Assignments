#include <stdio.h>

void fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d\n%d\n", a , b);
        a = a + b;
        b = a + b;
    }
}

int main(){
    fib(10);
    return 0;
}