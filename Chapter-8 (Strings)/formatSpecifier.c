#include<stdio.h>

int main(){

	char name[40];
	printf("Enter your name: ");
	scanf("%s", name); // &name
	printf("Your name is %s", name); 

	return 0;
}