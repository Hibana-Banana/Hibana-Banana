#include <stdio.h>

int main() {
	int a, b, c, max;
	printf("enter three integers seperated by spaces: ");
	scanf("%d%d%d", &a, &b, &c);

	max = findmax(a, b, c);
	printf("the biggest number was: %d\n", max);

	return 0;
}

int findmax(int a, int b, int c) {
	int max = a;

	if (b > a && b > c) {
		max = b;
	}
	else if (c > a) {
		max = c;
	}

	return max;
}