// Assignment 4

/*
c = (f - 32) * (5/9)
*/

#include <stdio.h>

int main(){
    float fahrenheit, celsius;
    printf("Enter the fahrenheit value :");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The corresponding celsius value is %f degree celsius. \n", celsius);
    return 0;
}