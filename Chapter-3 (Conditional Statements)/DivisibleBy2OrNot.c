#include<stdio.h>

int main(){
    
	int num;
    printf("Enter a number:");
    scanf("%d", &num);

    printf("%d \n", num % 2 == 0);
    return 0;
}