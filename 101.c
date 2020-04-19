#include <stdio.h>

int N = 5;

reverse(int* p, int n);
printarr(int arr[]);

main() {
	int i;
	int arr[5];
	printf("enter array:\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	reverse(arr, N);
	printarr(arr);
}

reverse(int* p, int n) {
	int temp, i;
	for (i = 0; i < n/2; i++) {
		temp = *(p + i);
		*(p + i) = *(p + (n - 1 - i));
		*(p + (n - 1 - i)) = temp;
	}
}

printarr(int arr[]) {
	for (int i = 0; i < N; i++) printf("%5d", arr[i]);
	printf("\n");
}