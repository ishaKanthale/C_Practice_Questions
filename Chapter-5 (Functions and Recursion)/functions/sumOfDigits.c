#include<stdio.h>
int sumOfDigits(int num);

int main(){

	printf("%d",sumOfDigits(123));
	return 0;
}

int sumOfDigits(int num){
	int sum=0;
	while(num>0){
		int lastDigit = num % 10;
		sum = sum + lastDigit;
		num = num / 10;
	}
	return sum;
}
