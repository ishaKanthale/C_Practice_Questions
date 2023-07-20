 #include<stdio.h>
int fact(int n);

int main(){ 

	int n;
	printf("Enter number: ");
	scanf("%d", &n);

	printf("Factoial is: %d", fact(n));
	return 0;
}

int fact(int n){

	int f;
	if(n == 1){
		return n;
	}
	f = n * fact(n-1);
	return f;
}