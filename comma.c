#include <stdio.h>

print_result(); 

int main() {
	int val1, val2, val3, result;

	val1 = 10;
	val2 = 43;
	val3 = 26;

	result = val1++, --val2, val3 + 4;
	print_result(result);

	result = (val1++, --val2, val3 + 4);
	print_result(result);

	return 0;
}

int print_result(int result) {
	printf("the result is: %d\n", result);

	return 0;
}