#include<stdio.h>
int sum(int a, int b);

int main(){
	
	int a, b;
	printf("Enter a and b: \n");
	scanf("%d %d", &a, &b);
	
	printf("Sum is %d", sum(a, b));
	return 0;
}

int sum(int a, int b){
	return a + b;
}