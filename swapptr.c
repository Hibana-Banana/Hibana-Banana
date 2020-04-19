#include <stdio.h>

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

main() {
	int x, y;
	int* px = &x, * py = &y;
	
	printf("enter two integers:\n");
	scanf("%d", px);
	scanf("%d", py);

	swap(px, py);
	printf("x = %d\ny = %d", x, y);
}