#include <stdio.h>
extern char* getstring(char* pstr);
extern void showstring(char* pstr);

int main() {
	char* pstr;

	pstr = getstring("hello");
	showstring(pstr);

	return 0;
}