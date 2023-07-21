#include<stdio.h>

struct complex{
	int real;
	int img;
};


int main(){

	struct complex number1 = {5, 8};	
	struct complex	*ptr = &number1;

	printf("Real Part = %d\n", ptr->real);
	printf("Imaginary  part = %d", ptr->img);

	return 0;
}

