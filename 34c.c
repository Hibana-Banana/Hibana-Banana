#include <stdio.h>

int main() {
	char extern_char = 'B';
	int extern_int = 2;
	float extern_float = 666.666;

	printf("new extern_char: %c\nnew extern_int: %d\nnew extern_float: %3.3f\n", extern_char, extern_int, extern_float);

	return 0;
}