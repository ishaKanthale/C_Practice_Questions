#include<stdio.h>

int countLength(char arr[]);

int main(){

	char name[100];
	printf("Enter your first name: ");
	fgets(name, 100, stdin);
	
	printf("String Length is %d", countLength(name));
	
	return 0;
}

int countLength(char arr[]){
	int count=0;
	for(int i=1; arr[i]!='\0'; i++){
		count++;
	}
	return count;
}