#include <stdio.h>

struct Student {
	char name[20];
	int id;
	char sex;
	int grade;
} student[5] = {
	{"James", 0001, 'M', 3},
	{"David", 0002, 'M', 3},
	{"Ava", 0003, 'F', 3},
	{"Stephen", 0004, 'M', 3},
	{"Stephenie", 0005, 'F', 3}
};

void printStudent(int i);

int main() {
	for (int i = 0; i < 5; i++) printStudent(i);

	return 0;
}

void printStudent(int i) {
	printf("Student No. %d\n", i);
	printf("Name: %s\nID: %d\n", student[i].name, student[i].id);
	printf("Sex: %c\ngrade: %d\n\n", student[i].sex, student[i].grade);
}