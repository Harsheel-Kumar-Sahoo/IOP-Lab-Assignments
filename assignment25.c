#include <stdio.h>

void printTable(int num) {
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d \n", num, i, num * i);
        
    }
    
}

int main(){
    printTable(4);
    return 0;
}