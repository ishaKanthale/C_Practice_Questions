#include<stdio.h>
#include<stdlib.h>

int main(){

	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	
	int *ptr;
	ptr = (int *)calloc(n, sizeof(int));

	for(int i=0; i<n; i++){
		printf("%d\n", ptr[i]);
	}
	
	free(ptr);
	
	printf("_____________\n");
	ptr = (int *)calloc(2, sizeof(int));
	
	for(int i=0; i<2; i++){
		printf("%d\n", ptr[i]);
	}

	return 0;
}