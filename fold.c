#include <stdio.h>

void fold(int left, int right, int array[]);

int main() {
	int i, a[10], j;
	int ii = 10;
	
	//enters array
	printf("enter array:\n");
	for (i = 0; i < ii; i++) {
		printf("a[%d] = :", i);
		scanf("%d", &a[i]);
	}

	//sequences array
	fold(0, ii-1, a);

	//outputs array;
	j = 1;
	for (i = 0; i < ii; i++) {
		printf("%d", a[i]);
		if (j % 4 == 0) printf("\n");
	}

	return 0;
}

void fold(int left, int right, int array[]) {
	int i, j, middle, temp;
	i = left;
	j = right;
	middle = array[(i + j / 2)]; //the middle value

	do {
		while ((array[i] < middle) && (i < right)) //find a value less than the middle from the left side
			i++;
		while ((array[j] > middle) && (j > left)) //find a value less than the middle from the left side
			j--;

		//when found, switch
		if (i <= j) {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	} while (i <= j); //stop when subscripts meet

	//µÝ¹é×ó
	if (left < j) fold(left, j, array);
	//µÝ¹éÓÒ
	if (right > i) fold(right, i, array);
}