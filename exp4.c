#include <windows.h>

#include <stdio.h>

struct student_record {
char name[20];
char address[50];
int age;
};

int main() {
struct student_record student1, student2, student3;
struct student_record students[50];
printf("Enter student 1 name: ");
scanf("%s", student1.name);
printf("Enter student 1 address: ");
scanf("%s", student1.address);

printf("Enter student 2 name: ");
scanf("%s", student2.name);
printf("Enter student 2 address: ");
scanf("%s", student2.address);

printf("Enter name for student 3: ");
scanf("%s", student3.name);
printf("Enter student 3 address: ");
scanf("%s", student3.address);

printf("Name of student 1: %s\n", student1.name);
printf("Address of student 1: %s\n", student1.address);
printf("Name of student 2: %s\n", student2.name);
printf("Address of student 2: %s\n", student2.address);
printf("Name of student 3: %s\n", student3.name);
printf("Address of student 3: %s\n", student3.address);

}
