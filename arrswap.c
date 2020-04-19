#include <stdio.h>
#include <stdlib.h>

int main() {
	int iArray[5], iTemp, i;

	printf("enter five integers:\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &iArray[i]);
	}
	printf("\n");

	print_array(iArray);

	for (i = 0; i < 2; i++) {
		iTemp = iArray[i];
		iArray[i] = iArray[4 - i];
		iArray[4 - i] = iTemp;
	}

	print_array(iArray);

	return 0;
}

int print_array(int array[]) {
	for (int ii = 0; ii < sizeof(array); ii++) {
		printf("%d ", array[ii]);
	}

	printf("\n");

	return 0;
}