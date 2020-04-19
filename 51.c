#include <stdio.h>

int main() {
	char upper, lower;

	printf("enter lower case letter: ");
	lower = getchar();
	upper = lower - 32;
	printf("the upper case equivalent is: %c", upper);

	return 0;
}