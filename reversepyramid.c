#include <stdio.h>

int main() {
	int iNum;
	printf("enter the height of the pyramid: ");
	scanf("%d", &iNum);

	for (int i = iNum; i >= 1; i--) {
		for (int j = iNum - i; j > 0; j--) {
			printf(" ");
		}
		for (int k = 2 * i - 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}