#include<stdio.h>

int main(){

	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	
	int sum = a + b;
	printf("Sum is %d", sum);
	//printf("Sum is %d", (a+b));
	
	return 0;
}