#include <stdio.h>

int main(){
    int m, p, c, e;
    printf("Enter the marks of Maths out of 200 : ");
    scanf("%d", &m);
    printf("\n");
    
    printf("Enter the marks of Physics out of 200 : ");
    scanf("%d", &p);
    printf("\n");
    
    printf("Enter the marks of Chemistry out of 200 : ");
    scanf("%d", &c);
    printf("\n");

    printf("Enter the marks of English out of 100 : ");
    scanf("%d", &e);
    printf("\n");

    int cm = m/2 + p/2 + c/2 + e;
    
    printf("The cut off marks of the student is %d \n", cm);
    

    return 0;
}