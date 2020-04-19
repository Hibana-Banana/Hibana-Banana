#include <stdio.h>

main() {
	char* str[] = {
		"one",
		"two",
		"three"
	};
	char** p = str;
	char** p2 = p;

	int a[2][2] = { 1, 2, 3, 4 };
	int(*intp)[2] = &a[0];
	
	printf("p2 = %d\n", p2);
	printf("*p2 = %d\n", *p2);
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	printf("str = %d\n", str);
	printf("str[0] = %d\n", str[0]);
	printf("*str[0] = %s\n", str[0]);

	printf("\na = %d\n", a);
	printf("*a = %d\n", *a);
	printf("a[0] = %d\n", a[0][0]);
	printf("intp = %d\n", intp);
	printf("*intp = %d\n", *(intp));
}