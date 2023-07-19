#include<stdio.h>

int main()
{
    //  Calculate Simple Interest
    float p, r, t;
    printf("Enter Principle: ");
    scanf("%f", &p);
    
    printf("Enter Rate: ");
    scanf("%f", &r);
    
    printf("Enter Time: ");
    scanf("%f", &t);
    
    printf("Simple Interest is: %f", (p*r*t)/100);
}