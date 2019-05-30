#include <stdio.h>
#include <string.h>
#include "student.h"

void printStudentByPtr(struct Student* s)
{
printf("Student -\n");
printf("  Firstname:%s\n", s->firstname);
printf("  Lastname:%s\n", s->lastname);
printf("  Age:%d\n", s->age);
printf("  id:%d\n", s->studentID);
}

