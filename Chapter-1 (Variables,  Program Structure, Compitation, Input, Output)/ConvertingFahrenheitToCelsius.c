#include<stdio.h>

int main()
{
    //  Converting Fahrenheit to Celsius
    float f;
    printf("Enter fahrenheit: ");
    scanf("%f", &f);
    
    printf("Celsius is: %f", ((f-32)*5)/9);
}