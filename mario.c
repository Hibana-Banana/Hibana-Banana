#include <stdio.h>

int main() {
	int iNum;
	printf("enter the height of the mario platform: ");
	scanf("%d", &iNum);

	for (int i = 1; i <= iNum; i++) {
		for (int j = 0; j < iNum - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}