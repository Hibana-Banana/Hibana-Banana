#include <stdio.h>
#include <string.h>

cpy(char* p, int n, char* cp);

main() {
	char str[50], copy[50];
	printf("enter a string: ");
	gets(str);

	cpy(str, 50, copy);
	printf("the copy is: %s\n", copy);
}

cpy(char* p, int n, char* cp)
{
	for (int i = 0; i < n; i++) {
		*(cp + i) = *(p + i);
	}
}
