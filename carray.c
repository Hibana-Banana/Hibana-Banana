#include <stdio.h>

int main() {
	char cArray[][] = { "  *", "  * *", "*   *", "  * *", "  *" };

	for (int i = 0; i < 5; i++) {
		printf("%c\n", cArray[i]);
	}

	return 0;
}