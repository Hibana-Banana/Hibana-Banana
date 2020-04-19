#include <stdio.h>
#define N 4

void max(int(*a)[N], int m);

main() {
	int a[3][N], i, j;
	int(*p)[N];
	p = &a[0];

	printf("input array:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < N; j++) scanf("%d", &a[i][j]);
	}

	max(p, 3);
}

void max(int(*a)[N], int m) {
	int value, i, j, sum = 0;
	for (i = 0; i < m; i++) {
		value = *(*(a + i));

		for (j = 0; i < N; j++) {
			if (*(*(a + i) + j) > value) value = *(*(a + i) + j);
		}

		printf("the max for row %d is: %d", i, value);
		sum += value;
	}

	printf("\nthe sum of the maxes are: %d", sum);
}