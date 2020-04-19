#include <stdio.h>

void atoz(int* p, int n);
void swap(int* a, int* b);

main() {
	int a[5], i, n;

	printf("enter array:\n");
	for(i = 0; i < 5; i++) {
		scanf("%d", a+i);
	}

	atoz(a, 5);
}

void atoz(int* p, int n) {
	int i, t, j;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1; j++) {
			if (*(p + j) > * (p + j + 1)) {
				swap(p + j, p + j + 1);
			}
		}
	}

	printf("array after atoz: ");
	for (i = 0; i < n; i++) {
		if (i % 5 == 0) printf("\n");
		printf("%5d", *(p + i));
	}

	printf("\n");
}

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}