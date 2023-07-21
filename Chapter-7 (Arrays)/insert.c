#include<stdio.h>

int main(){
	
	int a[100] = {12, 67, 34, 56, 23, 89}; 
	int size = 6, item;
	
	printf("Insert element : ");
	scanf("%d", &item);
	
	size = size + 1;
	a[size - 1] = item;
	
	for(int i=0; i<size; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}