#include<stdio.h>
#include<string.h>

int main(){

	char name[] = "aman";
	printf("Length is: %d\n", strlen(name));

	char oldStr[] = "Hello";
	char newStr[] = "World";
	strcpy(newStr, oldStr);
	puts(newStr);
	
	char firstStr[100] = "Hello ";
	char secondStr[] = "World";
	strcat(firstStr, secondStr);
	puts(firstStr);

	char first[] = "HHH";
	char second[] = "HHH";
	printf("%d", strcmp(first, second));	

	return 0;
}