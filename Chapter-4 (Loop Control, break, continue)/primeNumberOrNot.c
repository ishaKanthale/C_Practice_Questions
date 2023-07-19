#include<stdio.h>

int main(){
	
	int n = 7, isPrime = 1;
	
	for(int i = 2; i < n-1; i++){
		if(n % i == 0){
			isPrime = 0;
			break;
		}		
	}
	if(isPrime == 1){
		printf("Prime...");
	}else{
		printf("Not Prime...");
	}
	return 0;
}