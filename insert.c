#include <stdio.h>

int main() {
	int i, j, a[100], temp;
	int ii = 10;
	
	//enters array
	printf("enter the array:\n");
	for (i = 0; i < ii; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	//sequences the array
	for (i = 0; i < ii; i++) {
		temp = a[i];
		j = i - 1;

		while ((j >= 0) && (temp < a[j])) {
			a[i + 1] = a[j];
			j--;			
		}

		a[j + 1] = temp;
	}

	//outputs the array
	temp = 1;
	for (i = 0; i < ii; i++) {
		printf("%d\t", a[i]);
		if (temp % 4 == 0) printf("\n");
	}

	return 0;
}