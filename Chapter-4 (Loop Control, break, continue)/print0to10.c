#include<stdio.h>

int main(){
	
	for(int i = 0; i <= 10; i++ ){
		printf("%d ", i);
	}

	for(int i = 1.0; i <= 5.0; i++ ){
		printf("%f \n", i);
	}

	for(char i = 'a'; i <= 'z'; i++ ){
		printf("%c ", i);
	}
	return 0;
}