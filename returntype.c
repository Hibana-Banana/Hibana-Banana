#include <stdio.h>
#include <stdlib.h>

char showchar();

int main() {
	char result = showchar();
	printf("%c\n", result);

	return 0;
}

char showchar() {
	int num;
	printf("input a number: ");
	scanf("%d", &num);

	return num;
}