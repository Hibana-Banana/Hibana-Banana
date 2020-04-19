#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char str[7] = { "mrsoft" };
	char reverse[7] = { 0 };
	int size = sizeof(str);

	//insert string elements in reverse
	for (i = 0; i < 6; i++) {
		reverse[size - i - 2] = str[i];
	}

	printf("original string: %s\n", str);
	printf("reversed string: %s\n", reverse);

	return 0;
}