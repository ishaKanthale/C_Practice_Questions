#include<stdio.h>
int sum(int n);

int main(){ 

	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	printf("Sum is: %d", sum(n));
	return 0;
}

int sum(int n){

	int s; //sum of 1 to n
	if(n == 1){
		return n;
	}
	s = n + sum(n-1);
	return s;
}