#include<stdio.h>

int main(){
	
	int num;
	printf("Enter number: ");
	scanf("%d", &num);

	int i = 0;
	while(i <= num){
		printf("%d ", i);
		i++;
	}

	/*for(int i = 0; i <= num; i++){
		printf("%d \n", i);
	}*/	
	return 0;
}