#include<stdio.h>

int main(){

	int age = 22;
	//int _age = 23;
	char _age = 'a';
	int *ptr = &age;
	//int *_ptr = &_age;
	char *_ptr = &_age;

	printf("%u and %u\n", ptr, _ptr);
	printf("difference = %u\n", ptr-_ptr);
	_ptr = &age;
	printf("comparison = %u\n", ptr==_ptr);

	return 0;
}
