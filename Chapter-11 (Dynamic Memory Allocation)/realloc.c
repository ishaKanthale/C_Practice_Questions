#include<stdio.h>
#include<stdlib.h> 

int main(){

	int *ptr;
	ptr = (int *) calloc(5, sizeof(int));
	
	printf("Enter numbers(5): \n");
	for(int i=0; i<5; i++){
		scanf("%d", &ptr[i]);
	}

	ptr = realloc(ptr, 8);
	
	printf("Enter numbers(8): \n");
	for(int i=0; i<8; i++){
		scanf("%d", &ptr[i]); 
	}
	
	//	Print
	for(int i=0; i<8; i++){
		printf("number %d is %d\n", (i+1), ptr[i]);
	}
	return 0;
}