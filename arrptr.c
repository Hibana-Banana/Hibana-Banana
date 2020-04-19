#include <stdio.h>

int main() {
	int* p, * q, a[5], b[5], i;
	p = &a[0];
	q = b;

	for (i = 0; i < 5; i++) {
		a[i] = i + 1;
	}

	for (i = 0; i < 5; i++) {
		b[i] = (i + 1) * 10;
	}

	for (i = 0; i < 5; i++) {
		printf("%5d", *(p + i));
	}
	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("%5d", *(q + i));
	}
	printf("\n");
}