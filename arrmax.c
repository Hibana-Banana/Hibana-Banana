#include <stdio.h>

int main() {
	int a[2][3], b[3][4];
	int max, min;
	int h, l, i, j;

	/*makes array a have stuff*/
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	/*prints array a*/
	printf("Input success! The array is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	/*find the subscript and value of the maximum element of array a*/
	max = a[0][0];
	h = 0;
	l = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				h = i;
				l = j;
			}
		}
	}

	//print max element
	printf("the maximum element is: %d (%d, %d)\n", max, h, l);

	//find the subscript and value of the minimum element of array a
	min = a[0][0];
	h = 0;
	l = 0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			if (max > a[i][j]) {
				max = a[i][j];
				h = i;
				l = j;
			}
		}
	}

	//print min element
	printf("the minimum element is: %d (%d, %d)\n", max, h, l);

	return 0;
}