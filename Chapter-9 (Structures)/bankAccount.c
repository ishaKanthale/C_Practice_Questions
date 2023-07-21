#include<stdio.h>

typedef struct BankAccount{
	int accountNo;
	char name[100];
}acc;

int main(){
	
	acc acc1 = {123, "shradha"};
	acc acc2 = {124, "rajat"};
	acc acc3 = {125, "sudhir"};

	printf("acc no = %d\n", acc1.accountNo);
	printf("name = %s", acc1.name);	

	return 0;
}