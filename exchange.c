#include <stdio.h>

int main() {
	int i, j, temp, ii;
	int a[100];
	ii = 10;

	//makes array
	printf("enter the array:\n");
	for (i = 0; i < ii; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	//sequences array
	for (i = 0; i < ii - 1; i++) {
		for (j = i+1; j < ii; j++) {
			if (a[j] < a[i]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	//outputs array
	temp = 1;
	for (i = 0; i < ii; i++) {
		printf("%d\t", a[i]);
		if (temp % 4 == 0) printf("\n");
		temp++;
	}

	return 0;
}