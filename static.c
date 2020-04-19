#include <stdio.h>

static char* getstring(char* pstr) {
	return pstr;
}

static void showstring(char* pstr) {
	printf("%s\n", pstr);
}

int main() {
	char* pstr;

	pstr = getstring("hello");
	showstring(pstr);

	return 0;
}