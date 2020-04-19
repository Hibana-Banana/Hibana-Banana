#include <stdio.h>

main() {
	char str1[] = "the pppupu man", str2[30], * cptr1, * cptr2;
	cptr1 = str1;
	cptr2 = str2;

	while (*cptr1 != '\0') {
		*cptr2 = *cptr1;
		cptr1++;
		cptr2++;
	}
	*cptr2 = '\0';

	printf("string2: ");
	puts(str2);
	printf("\n");
}