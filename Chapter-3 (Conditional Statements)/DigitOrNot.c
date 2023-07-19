#include<stdio.h>

int main(){
	
	char ch;
	printf("\nEnter Character : ");
	scanf("%c", &ch);
	
	if(ch > '0' && ch < '9'){
		printf("\tCharacter is digit :%c\n", ch);
	}else{
		printf("\tCharacter is not a digit :%c\n", ch);
	}
	return 0;
}