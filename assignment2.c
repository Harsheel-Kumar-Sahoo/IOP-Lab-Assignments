// Assignment 2

#include <stdio.h>

int main(){
    int m1, m2, m3, m4, m5;
    printf("Enter the marks of first subject: \n");
    scanf("%d", &m1);
    printf("Enter the marks of second subject: \n");
    scanf("%d", &m2);
    printf("Enter the marks of third subject: \n");
    scanf("%d", &m3);
    printf("Enter the marks of fourth subject: \n");
    scanf("%d", &m4);
    printf("Enter the marks of fifth subject: \n");
    scanf("%d", &m5);

    int total = m1 + m2 + m3 + m4 + m5;

    float perc = (total / 5);

    printf("The total is : %d \n", total);
    printf("The percentage is : %f %", perc);
    
    
    return 0;
}