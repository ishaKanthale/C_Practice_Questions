#include<stdio.h>

int main(){

	float radius;
	printf("Enter Radius: ");
	scanf("%f", &radius);
	
	float area = 3.14 * radius * radius;
	printf("Area of Square is %f", area);
	
	return 0;
}
