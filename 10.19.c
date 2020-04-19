#include <stdio.h>
#include <string.h>

atoz(char* str[], int n);
swap(char* a, char* b);

main() {
	int n = 12, i;
	char** p;
	char* month[] = 
	{
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

	p = month;
	//atoz(p, n);

	for(i = 0; i < n; i++) {
		printf("%s\n", *(p+i));
	}
}

atoz(char* str[], int n) {
	int i,j;
	
	for(i = 0; i < n; i++) {
		for(j = i + 1; i < n; j++) {
			if(strcmp(str[i], str[j]) > 0) {
				swap(str[i], str[j]);
			}
		}
	}
}

swap(char* a, char* b) {
	char* tmp = a;
	*a = *b;
	*b = *tmp;
}