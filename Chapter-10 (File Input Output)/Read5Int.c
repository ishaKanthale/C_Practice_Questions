#include<stdio.h>

int main(){
	
	FILE *fptr;
	fptr = fopen("Test.txt", "r");
	
	if(fptr == NULL){
		printf("file doesn't exist...");
	}else{
		int n;
		fscanf(fptr, "%d", &n);
		printf("%d \n", n);
		fscanf(fptr, "%d", &n);
		printf("%d \n", n);
		fscanf(fptr, "%d", &n);
		printf("%d \n", n);
		fscanf(fptr, "%d", &n);
		printf("%d \n", n);
		fscanf(fptr, "%d", &n);
		printf("%d \n", n);
	}
	fclose(fptr);
	return 0;
}