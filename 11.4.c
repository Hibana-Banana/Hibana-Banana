#include <stdio.h>

struct Student {
	char name[20];
	int id;
	char sex;
	int grade;
} student = { "YYY", 42069, 'M', 3 };

int main() {
	struct Student* pstruct = &student;
	printf("======QUERY======\n");
	printf("Name: %s\nID: %d\nSex: %c\nGrade: %d\n", (*pstruct).name, (*pstruct).id, (*pstruct).sex, (*pstruct).grade);

	return 0;
}