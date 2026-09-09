//Assignment 3
#include <stdio.h>

int main() {
    float mainSalary, add1, add2, sub1, sub2;
    printf("Enter the main salary : ");
    scanf("%f", &mainSalary);
    printf("\n");
    
    printf("Enter the adding parameter 1 : ");
    scanf("%f", &add1);
    printf("\n");
    
    printf("Enter the adding parameter 2 : ");
    scanf("%f", &add2);
    printf("\n");
    
    printf("Enter the subtracting parameter 1 : ");
    scanf("%f", &sub1);
    printf("\n");
    
    printf("Enter the subtracting parameter 2 : ");
    scanf("%f", &sub2);
    printf("\n");
    
    mainSalary += add1 * mainSalary / 100;
    mainSalary += add2 * mainSalary / 100;
    mainSalary -= sub1 * mainSalary / 100;
    mainSalary -= sub2 * mainSalary / 100;

    printf("The net gross salary is %f \n", mainSalary);
    
    return 0;
}