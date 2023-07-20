#include<stdio.h>
void printTable(int n);

int main(){
	
	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	printTable(n);	// arguments or actual parameters 	

	return 0;
}

void printTable(int n){	// parameters or formal parameters
	
	for(int i=1; i<=10; i++){
		printf("%d \n", n*i);
	}
}