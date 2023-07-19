#include<stdio.h>

int main()
{
    //  Converting Celsius to Fahrenheit
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    
    printf("Fahrenheit is: %f", ((c*9)/5)+32);
}
