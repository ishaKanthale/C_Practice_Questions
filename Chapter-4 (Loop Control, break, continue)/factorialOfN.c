#include<stdio.h>

int main(){
	
	int n=3, fact=1;
	
	for(int i=1; i<=n; i++){
		fact *= i;
	}
	printf("Factorial is: %d", fact);
	return 0;
}