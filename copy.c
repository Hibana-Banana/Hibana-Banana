#include <stdio.h>
#include <string.h>

int main() {
	char cStr1[30], cStr2[30];
	
	//enter strings
	printf("enter the destination string: ");
	gets(cStr1);
	printf("enter the origin string: ");
	gets(cStr2);

	//output strings
	printf("dest output: ");
	puts(cStr1);
	printf("orig output: ");
	puts(cStr2);

	//copy strings
	strcpy(cStr1, cStr2);
	printf("dest output after copy: ");
	puts(cStr1);

	return 0;
}