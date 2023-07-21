#include<stdio.h>

void printString(char string[]);

int main(){
	
	char firstName[] = "Isha";
	char lastName[] = "Kanthale";

	printString(firstName);
	printString(lastName);
 	return 0;
}

void printString(char string[]){
	
	for(int i=0; string[i]!='\0';i++){
		printf("%c", string[i]);
	}
	printf(" ");
}