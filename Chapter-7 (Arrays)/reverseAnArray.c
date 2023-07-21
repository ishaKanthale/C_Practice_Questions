#include<stdio.h>

void reverse(int arr[], int n);

int main(){
	
	int arr[] = {1, 2, 3, 4, 5};
	
	reverse(arr, 5);
	
	for(int i=0; i<5; i++){
		printf("%d \t", arr[i]);
	}

	return 0;
}

void reverse(int arr[], int n){
	
	for(int i=0; i<n/2; i++){
		int firstVal = arr[i]; 
		int lastVal = arr[n-i-1];
		
		arr[i] = lastVal;
		arr[n-i-1] = firstVal;
	}
}