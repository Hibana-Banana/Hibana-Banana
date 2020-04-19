#include <stdio.h>

int main() {
	char extern_char = 'A';
	int extern_int = 1;
	float extern_float = .666;
	printf("extern_char value: %c\nextern_int value: %d\nextern_float value: %.3f\n", extern_char, extern_int, extern_float);

	return 0;
}