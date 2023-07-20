#include<stdio.h>
#include<math.h>
int power(int n);

int main(){

	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	//printf("%f", pow(num,2));
	
	printf("%d", power(num));
	return 0;
}

int power(int n){
	
	int res = 1;
	for(int i=1; i<=2; i++){
		res = res * n; 
	}
	return res;
}