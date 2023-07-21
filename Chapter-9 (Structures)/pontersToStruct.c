#include<stdio.h>
#include<string.h>

// User-defined datatype
struct student{
	int roll;
	float cgpa;
	char name[100];
};

int main(){
	
	// Initializing Structures
	struct student s1 = {1552, 8.3, "rajat"};

	printf("name = %s\n", s1.name);
	printf("roll no = %d\n", s1.roll);
	printf("cgpa = %f\n", s1.cgpa);	

	// Pointers To Structures
	struct student *ptr = &s1;

	printf("name = %s\n", ptr->name);
	//printf("roll no = %d\n", ptr->roll);
	printf("roll no = %d\n", (*ptr).roll);
	printf("cgpa = %f\n", ptr->cgpa);	

	return 0;
}