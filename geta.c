#include <stdio.h>

int main() {
	char ch1;
	ch1 = getchar();
	putchar(ch1);
	putchar('\n');
	putchar(getchar());
	putchar('\n');

	return 0;
}