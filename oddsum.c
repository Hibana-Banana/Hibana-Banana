#include <stdio.h>

void sum(int* p, int n) {
	int i, sum = 0;
	printf("odd elements:\n");
	for(i = 0; i < n; i++) {
		if(*(p+i)%2 != 0) {
			printf("%5d", *(p+i));
			sum += *(p+i);
		}
		printf("\nsum: %d\n", sum);
	}
}

main() {
	int* ptr, a[10], i;
	ptr = a;
	printf("input array:\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", (p+i));
	}
	sum(ptr, 10);
}