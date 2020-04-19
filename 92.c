#include <stdio.h>

int arravg(int arr[]);

int main() {
	int score[10];

	for (int i = 0; i < 10; i++) {
		score[i] = i;
	}

	printf("the average is: %d\n", arravg(score));
}

int arravg(int arr[])
{
	int count = 0;
	int avg;
	for (int i = 0; i < 10; i++) {
		count += arr[i];
	}

	avg = count / 10;

	return avg;
}
