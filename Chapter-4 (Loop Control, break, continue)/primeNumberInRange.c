#include<stdio.h>

int main(){
	
	int l = 10, u = 20, i, j;
	
	for(i = l + 1; i <= u - 1; i++){
		for(j = 2; j <= i - 1; j++){
			if(i % j == 0){
				break;
			}		
		}
		if(j == i){
			printf("%d ", i);
		}
	}
	
	return 0;
}