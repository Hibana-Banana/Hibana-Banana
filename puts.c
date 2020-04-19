#include <stdio.h>

int main() {
	char* ch1 = "randomstring";

	puts("randomstring");
	puts("random\0string");
	puts(ch1);
	ch1 = "random\0string";
	puts(ch1);

	return 0;
}