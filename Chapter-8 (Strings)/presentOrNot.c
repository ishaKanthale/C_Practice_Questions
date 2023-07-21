#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main(){
	
	char str[] = "ApnaCollege";
	checkChar(str, 'x');	

	return 0;
}

void checkChar(char str[], char ch){

	for(int i=0; str[i] != '\0'; i++){
		if(str[i]==ch){
			printf("Character is present!");
			return;
		}
	}
	printf("Character is not present:(");
}