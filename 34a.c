#include <stdio.h>

int main() {
	extern char extern_char;
	extern int extern_int;
	extern float extern_float;
	printf("success!\n\a");

	printf("extern_char: %c\nextern_int: %d\nextern_float: %.3f\n", extern_char, extern_int, extern_float);

	return 0;
}