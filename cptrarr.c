#include <stdio.h>

main() {
	char** p;
	char* month[] = {
		"jan",
		"feb",
		"mar",
		"apr",
		"may",
		"jun",
		"jul",
		"aug",
		"sep",
		"oct",
		"nov",
		"dec"
	};

	for (int i = 0; i < 12; i++) {
		printf("%s\n", *(month+i));
	}
}