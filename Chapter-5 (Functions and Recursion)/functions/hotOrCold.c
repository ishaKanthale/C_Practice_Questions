#include<stdio.h>

int main(){
	
	int temp;
	printf("Enter temperature: ");
	scanf("%d", &temp);

	if(temp > 30){
		printf("Hot...");
	}else if(temp < 22){
		printf("Cold...");
	}else{
		printf("Normal..");
	}	
	return 0;
}