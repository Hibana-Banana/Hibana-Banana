#include <stdio.h>

int main() {
	int a[10], temp, pos, i, j;
	int ii = 5;

	printf("enter the array:\n");
	for (i = 0; i < ii; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	//least to greatest
	for (i = 0; i < ii-1; i++) {
		for (j = i + 1; j < ii; j++) {
			if (a[j] < a[i]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	//output array
	i = 0;
	while (i < 10) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", a[i]);
			i++;
		}
		printf("\n");
	}

	return 0;
}