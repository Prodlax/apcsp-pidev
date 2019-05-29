struct Student {
char firstname[256];
char lastname[256];
int age;
int studentID;
};


void printStudentByPtr(struct Student* s)
{
printf("Student -\n");
printf("  Firstname:%s\n", s->firstname);
printf("  Lastname:%s\n", s->lastname);
printf("  Age:%d\n", s->age);
printf("  id:%d\n", s->studentID);
}


