#include<stdio.h>

int main(){

	float length, breadth;
	printf("Enter length: ");
	scanf("%f", &length);
	printf("Enter breadth: ");
	scanf("%f", &breadth);
	
	float area = length * breadth;
	printf("Area of Square is %f", area);
	
	return 0;
}