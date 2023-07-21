#include<stdio.h>

int main(){

	char str[40];
	printf("Enter your full name: ");
	
	fgets(str, 100, stdin);
	//gets(str);
	puts(str);
	return 0;
}