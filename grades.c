#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i;
	int sport[12], morals[12], intel[12], overall[12];
	time_t tim;

	for (i = 0; i < 12; i++) {
		sport[i] = rand();
		morals[i] = rand();
		intel[i] = rand();
		overall[i] = intel[i] * 0.60 + morals[i] * 0.30 + sport[i] * 0.10;
		printf("%d\n", overall[i]);
	}

	atoz(overall);
	printf("%d\n", overall[i]);

	return 0;
}

int atoz(int arr[]) {
	int count = sizeof(arr);
	int temp;
	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			if (arr[i] > arr[j]) { //if bigger, switch. 
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}
		}
		
	}
}