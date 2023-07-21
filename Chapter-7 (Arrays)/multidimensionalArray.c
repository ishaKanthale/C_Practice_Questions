#include<stdio.h>

int main(){

	// Three subject marks of two student
	int marks[2][3];
	/*
	first student
	marks[0][0] = 90;
	marks[0][1] = 89;
	marks[0][2] = 78;

	second student
	marks[1][0] = 90;
        marks[1][1] = 89;
	marks[1][2] = 78; 
	*/

	for(int i=0; i<2; i++){
		printf("Enter %d student marks... \n", i+1);
		for(int j=0; j<3; j++){
			printf("subject %d : ", j+1);
			scanf("%d", &marks[i][j]);
		}
	}	
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("%d \t", marks[i][j]);
		}
		printf("\n");
	}
	return 0;
}