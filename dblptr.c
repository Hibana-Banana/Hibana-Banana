#include <stdio.h>
#include <stdlib.h>

main() {
	int a[10], * p1, ** p2, i, n = 0;

	for (i = 0; i < 10, i++) a[i] = rand();

	p1 = a;
	p2 = &p1;
	
	printf("the array is: ");


}