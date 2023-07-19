#include<stdio.h>

int main(){
	
	int n, sum = 0;
	prinf("Enter number: ");
	scanf("%d", &n);	
	
	/*for(int i=1, j=n; i<=n && j>=1; i++, j--){
		sum += i;
		printf("%d ", j);
	} 
	printf("\n%d", sum);*/

	for(int i=n; i>=1; i--){
		sum = sum + i;
		printf("%d \n", i);
	}
	printf("Sum is: %d",sum);
	return 0;
}