#include<stdio.h>
int calculatePer(int sci, int math, int sans);

int main(){

	int sci = 98, math = 95, sans = 99;
	printf("Percentage is: %d", calculatePer(sci, math, sans));
	return 0;
}

int calculatePer(int sci, int math, int sans){
	return ((sci+math+sans)/3);
}