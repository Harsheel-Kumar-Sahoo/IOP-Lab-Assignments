// Program to calculate simple interest

#include <stdio.h>

int main(){
    float p, r, t;
    printf("Enter the principle amount:\n");
    scanf("%f", &p);
    printf("Enter the rate of interest:\n");
    scanf("%f", &r);
    printf("Enter the time period (in years):\n");
    scanf("%f", &t);
    float SI = (p * r * t) / 100;
    printf("The simple interest is: %f\n", SI);
    
    
    return 0;
}