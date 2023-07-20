#include<stdio.h>
#include<math.h>

int main(){
	
	float i, n;
	printf("\nEnter a number: ");
	scanf("%f", &n);

	for(i=0.01; i*i<n; i=i+0.01);

	printf("%.2f", i);

	
	//printf("%f", sqrt(25));
	return 0;
}