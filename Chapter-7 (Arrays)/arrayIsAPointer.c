#include<stdio.h>

int main(){

	int arr[3];
	int *ptr = &arr[0];
	int *_ptr = arr;

	printf("%u\n", ptr);
	printf("%u\n", _ptr);
	return 0;
}