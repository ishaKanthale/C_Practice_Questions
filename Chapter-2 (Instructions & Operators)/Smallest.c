#include<stdio.h>

int main(){
	
	int a = 23, b = 12;
	int min = (a > b) * b + (b > a) * a;
	printf("Smallest number is %d", min);
	return 0;
}