#include<stdio.h>

int main(){

	FILE *fptr;
	fptr = fopen("number.txt", "r");
	
	if(fptr == NULL){
		printf("file doesn't exist...");
	}else{
		int a, b;
		fscanf(fptr, "%d", &a);
		fscanf(fptr, "%d", &b);
		fclose(fptr);
		
		//int sum = a + b;
		fptr = fopen("number.txt", "w");
		fprintf(fptr, "%d", a + b);
	}
	fclose(fptr);
	
	return 0;
} 