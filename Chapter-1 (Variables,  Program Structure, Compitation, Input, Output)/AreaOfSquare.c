#include<stdio.h>

int main(){

	float side;
	printf("Enter side: ");
	scanf("%f", &side);
	
	float area = side * side;
	printf("Area of Square is %f", area);
	
	return 0;
}