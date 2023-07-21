#include<stdio.h>
#include<string.h>

// User-defined datatype
struct student{
	int roll;
	float cgpa;
	char name[100];
};

int main(){
	
	struct student ece[100];
	ece[0].roll = 1664;
	ece[0].cgpa = 9.2;
	strcpy(ece[0].name, "shradha");

	printf("name = %s\n", ece[0].name);
	printf("roll no = %d\n", ece[0].roll);
	printf("cgpa = %f\n", ece[0].cgpa);

	// Initializing Structures
	struct student s1 = {1552, 8.3, "rajat"};

	printf("name = %s\n", s1.name);
	printf("roll no = %d\n", s1.roll);
	printf("cgpa = %f\n", s1.cgpa);	

	return 0;
}