#include <stdio.h>
#include <string.h>

void main() {
	char str1[50], str2[50];

	printf("enter first string: ");
	gets(str1);
	printf("enter second string: ");
	gets(str2);

	strcat(str1, str2);
	printf("\n%s\n", str1);
}