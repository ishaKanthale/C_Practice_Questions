#include<stdio.h>

void maxNum(int *a, int *b);

int main(){
	
	int a = 7, b = 5;

	maxNum(&a, &b);	

	return 0;
}

void maxNum(int *a, int *b){
	
	if(*a > *b){
		printf("Maximum number is %d", *a);
	}else{
		printf("Maximum number is %d", *b);
	}
}