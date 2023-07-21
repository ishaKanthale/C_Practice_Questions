#include<stdio.h>

int largest(int arr[], int size);

int main(){

	int arr[] = {7, 3, 4, 7, 2, 48, 3, 7, 2, 4, 5, 4, 2, 5};

	printf("Largest number is %d", largest(arr, 14));
	return 0;
}

int largest(int arr[], int size){
	
	int large = arr[0];
	for(int i=1; i<size; i++){
		if(large < arr[i]){
			large = arr[i];
		}
	}
	return large;
}