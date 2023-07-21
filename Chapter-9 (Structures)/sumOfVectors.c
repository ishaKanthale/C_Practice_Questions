#include<stdio.h>

struct vector{
	int x;
	int y;
};

void calculateSum(struct vector v1, struct vector v2);

int main(){
	
	struct vector v1 = {5, 10};
	struct vector v2 = {3, 7};

	calculateSum(v1, v2);
	return 0;
}

void calculateSum(struct vector v1, struct vector v2){
	struct vector sum = {0};
	sum.x = v1.x + v2.x;
	sum.y = v1.y + v2.y;

	printf("Sum of x is: %d\n", sum.x);
	printf("Sum of y is: %d\n", sum.y);
}