#include<stdio.h>
#include<math.h>

int main(){
	
	float principle, rate, time, compoundInterest;
	
	printf("Enter principle, rate and time :");
	scanf("%f%f%f", &principle, &rate, &time);
	
	compoundInterest = principle * (pow((1 + rate/100), time));
	printf("Compound Interest is %f", compoundInterest);
	
	return 0;
}