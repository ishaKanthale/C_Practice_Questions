#include<stdio.h>
#include<string.h>

typedef struct Student{
	int roll;
	float cgpa;
	char name[100];
}stu;

typedef struct ComputerEngineeringStudent{
	int roll;
	float cgpa;
	char name[100];
}coe;

void printInfo(struct ComputerEngineeringStudent s);

int main(){
	
	coe s1;
	s1.roll = 1664;
	s1.cgpa = 9.2;
	strcpy(s1.name, "shradha");
	
	printInfo(s1);
	return 0;
}

void printInfo(struct ComputerEngineeringStudent s){
	
	printf("Student Information: \n");
	printf("name = %s\n", s.name);
	printf("roll no = %d\n", s.roll);
	printf("cgpa = %f\n", s.cgpa);	
}