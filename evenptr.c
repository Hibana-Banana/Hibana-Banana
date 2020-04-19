#include <stdio.h>

main() {
	int a[10], * p1, ** p2, i, n = 0;

	printf("input array:\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	p1 = a;
	p2 = &p1;

	printf("the array is: ");
	for(i = 0; i < 10; i++) {
		if(*(*p2 + i) % 2 == 0) {
			printf("%5d", *(*p2 + i));
			n++;
		}
	}
	printf("\n");
	printf("number of even elements: %d\n", n);
}