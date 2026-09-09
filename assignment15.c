#include <stdio.h>

int main(){
    int m1, m2, m3, m4, m5;
    
    printf("Enter the marks of first subject : ");
    scanf("%d", &m1);
    
    printf("Enter the marks of second subject : ");
    scanf("%d", &m2);
    
    printf("Enter the marks of third subject : ");
    scanf("%d", &m3);
    
    printf("Enter the marks of fourth subject : ");
    scanf("%d", &m4);
    
    printf("Enter the marks of fifth subject : ");
    scanf("%d", &m5);

    float avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    if (avg >= 90) {
        printf("A Division \n");
    } else if (avg >= 80 && avg <= 90) {
        printf("B Division \n");
    } else if (avg >= 70 && avg <= 80) {
        printf("C Division \n");
    } else {
        printf("D Division");
    }
    return 0;
}