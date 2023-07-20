#include<stdio.h>
void namaste();
void bonjour();

int main(){
	
	char ch;
	printf("Enter 'i' for indian or 'f' for french:");
	scanf("%c", &ch);

	if(ch == 'i'){
		namaste();
	}else if(ch == 'f'){
		bonjour();
	}else{
		printf("Wrong input...");
	}
	return 0;
}

void namaste(){
	printf("Namaste");
}

void bonjour(){
	printf("Bonjour");
}