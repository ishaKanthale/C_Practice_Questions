#include<stdio.h>
float convertTemp(float c);

int main(){ 
	
	printf("Fahrenheit is: %f", convertTemp(37));
	return 0;
}

float convertTemp(float c){
	float f = (c * (9.0/5.0)) + 32;
	return f;
}
