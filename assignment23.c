#include <stdio.h>

int main(){
    int base, power;
    printf("Enter the base : ");
    scanf("%d", &base);
    
    printf("Enter the power : ");
    scanf("%d", &power);

    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= base;
    }

    printf("%d \n", result);
    
    

    return 0;
}