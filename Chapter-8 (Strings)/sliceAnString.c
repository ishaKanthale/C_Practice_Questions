#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main(){
	
	char str[100];
	printf("Enter string: ");
	fgets(str, 100, stdin);

	int n, m;
	printf("Enter starting index: ");
	scanf("%d", &n);
	printf("Enter ending index: ");
	scanf("%d", &m);

	slice(str, n, m);

	return 0;
}

void slice(char str[], int n, int m){
	
	char newStr[100];
	int j=0;
	for(int i=n; i<=m; i++){
		newStr[j]=str[i]; 
		j++;
	}
	newStr[j]='\0';
	puts(newStr);
}