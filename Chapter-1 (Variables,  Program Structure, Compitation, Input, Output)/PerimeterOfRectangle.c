#include<stdio.h>

int main(){

	float a, b;
	printf("Enter length of rectangle: ");
	scanf("%f", &a);
	printf("Enter width of rectangle: ");
	scanf("%f", &b);
	
	float perimeter = (a + b)*2;
	printf("Perimeter of rectangle is %f", perimeter);
	
	return 0;
}
