#include<stdio.h>

int main(){

	float breadth, heigth;
	printf("Enter breadth: ");
	scanf("%f", &breadth);
	printf("Enter heigth: ");
	scanf("%f", &heigth);
	
	float area = 0.5 * breadth * heigth;
	printf("Area of Square is %f", area);
	
	return 0;
}