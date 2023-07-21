#include<stdio.h>

int numberOccur(int arr[], int size, int x);

int main(){

	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	int arr[] = {7, 3, 4, 7, 2, 4, 3, 7, 2, 4, 5, 4, 2, 5};

	printf("Number %d occurs: %d times..", x, numberOccur(arr, 14, x));
	return 0;
}

int numberOccur(int arr[], int size, int x){
	
	int count=0;
	for(int i=0; i<size; i++){
		if(arr[i] == x){
			count++;
		}
	}
	return count;
}