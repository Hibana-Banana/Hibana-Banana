#include <stdio.h>

void max(int i, int j);

void printmax(int i);

int main() {
	int i, j;
	printf("enter integer: ");
	scanf("%d", &i);
	printf("enter integer: ");
	scanf("%d", &j);

	max(i, j);

	return 0;
}

void max(int i, int j)
{
	if (i == j) {
		printf("the two integers are the same\n");
	}
	else if (i < j) {
		printmax(j);
	}
	else {
		printmax(i);
	}
}

void printmax(int i)
{
	printf("the greater integer is %d\n", i);
}
