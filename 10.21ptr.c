#include <stdio.h>

int circ;

int* per(int a, int b);
int input(char* str);

main() {
	int wid, len, * res;

	len = input("enter the length: ");
	wid = input("enter the width: ");

	res = per(wid, len);
	printf("the circumference is: %d", *res);
}

int* per(int a, int b) {
	int* p = &circ;
	circ = (a + b) * 2;
	return p;
}

int input(char* str) {
	int input;
	printf("%s", str);
	scanf("%d", &input);

	return input;
}