#include <stdio.h>

int main() {
	int i = 666;
	int* p = &i;

	printf("i = %d\n", i);
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	printf("&*p = %d\n", &*p);
	printf("&i = %d\n", &i);
	printf("*&i = %d\n", *&i);

	return 0;
}