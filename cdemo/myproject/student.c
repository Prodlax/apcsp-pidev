#include <stdio.h>
#include <string.h>
#include "student.h"

int main()
{
	int age;
	int studentID;
	char firstname[256];
	char lastname[256];
	char input[256];
	struct Student s[256];
	printf("Enter first name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", firstname);
	printf("Enter last name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", lastname);
	printf("Enter age:\n");
	fgets(input, 4, stdin);
	sscanf(input, "%d", &age);
	printf("Enter student ID:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentID);


struct Student student1;
struct Student student2;


strcpy(student1.firstname, firstname);
strcpy(student1.lastname, lastname);
student1.age = age;
student1.studentID = studentID;

printStudentByPtr(&student1);
}

