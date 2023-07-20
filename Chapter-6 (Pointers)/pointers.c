#include<stdio.h>

int main(){
	
	int age = 22;
	//int *ptr = &age; 
	int* ptr = &age;  
	int _age = *ptr; 
	printf("%d\n", _age);  

	/*printf("%p\n", &age);
	printf("%p\n", ptr);
	printf("%p\n", &ptr);*/
	
	//Address
	printf("%u\n", &age);
	printf("%u\n", ptr);
	printf("%u\n", &ptr);
	
	//Value
	printf("%d\n", age);
	printf("%d\n", *ptr);
	printf("%u\n", *(&age));
	return 0;
}