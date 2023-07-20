#include<stdio.h>
float areaOfSquare(float side);
float areaOfCircle(float radius);
float areaOfRectangle(float length, float width);

int main(){
	
    printf("%f \n", areaOfSquare(6));
	printf("%f \n", areaOfCircle(12));
	printf("%f \n", areaOfRectangle(5, 10));	

	return 0;
}

float areaOfSquare(float side){
	return side * side;
}
float areaOfCircle(float radius){
	return 3.14 * radius * radius;
}
float areaOfRectangle(float length, float breath){
	return length * breath;
}