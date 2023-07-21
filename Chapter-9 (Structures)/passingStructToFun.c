#include<stdio.h>
#include<string.h>

// User-defined datatype
struct student{
	int roll;
	float cgpa;
	char name[100];
};

void printInfo(struct student s);

int main(){

	struct student s1 = {1552, 8.3, "rajat"};	

	printInfo(s1);

	return 0;
} 

void printInfo(struct student s){
	
	printf("Student Information: \n");
	printf("name = %s\n", s.name);
	printf("roll no = %d\n", s.roll);
	printf("cgpa = %f\n", s.cgpa);	
}