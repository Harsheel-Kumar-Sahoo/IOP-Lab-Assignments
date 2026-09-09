#include <stdio.h>

void printSeries(int n) {
    int i = 2;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
}

int main(){
    printSeries(10);
    return 0;
}