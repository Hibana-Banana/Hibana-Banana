#include <stdio.h>

int main() {
	int i;
	char str[64], cpy[64];
	printf("enter string: ");
	scanf("%s", &str);
	printf("%s\n", str);

	for (i = 0; i < 128; i++) {
		cpy[i] = str[i];
	}
	cpy[i] = '\0';

	printf("%s\n", cpy);

	return 0;
}