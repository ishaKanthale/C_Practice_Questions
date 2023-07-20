#include<stdio.h>
void printHello();	//function prototype or declaration
void printGoodBye();

int main(){
	
	printHello();	//function calling
	printGoodBye ();	
	return 0;
}

void printHello(){	//function definition
	printf("Hello! \n");	
}

void printGoodBye(){
	printf("Good Bye...\n");
}