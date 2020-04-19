#include <stdio.h>

int main() {
	float num = 4988651.456;
	wchar_t zi = '×Ö';
	
	printf("the float is: %e", num);
	printf("%wc", zi);

	return 0;
}