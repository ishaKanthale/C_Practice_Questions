#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float *ptr;
	ptr = (float *)malloc(5 * sizeof(float));
	
	for(int i=0; i<5; i++){
		printf("Enter %d price: ", (i+1));
		scanf("%f", &ptr[i]);
	}
	
	for(int i=0; i<5; i++){
		printf("%f\n", ptr[i]);
	}

	return 0;
}