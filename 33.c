#include <stdio.h>

int TimesThree() {
	static int num = 3;
	num *= 3;

	return num;
}

int main() {
	int result = TimesThree();
	result = TimesThree();
	printf("result is %d\n\a", result);

	return 0;
}