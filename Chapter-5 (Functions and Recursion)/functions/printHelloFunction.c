#include<stdio.h>
void printHello();	//function prototype or declaration

int main(){
	
	printHello();	//function calling
	printHello();	
	printHello();
	return 0;
}

void printHello(){	//function definition
	printf("Hello! \n");	
}
