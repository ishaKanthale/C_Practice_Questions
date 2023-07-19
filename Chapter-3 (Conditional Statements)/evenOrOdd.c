#include<stdio.h>

int main()
{
    //  Even -> 0 or Odd -> 1
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    printf("%d \n", num % 2 == 0);
    return 0;
}