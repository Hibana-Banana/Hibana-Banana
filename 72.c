#include <stdio.h>

int main() {
	int counter = 0;
	int printer;

	while (1) {
		for (int i = 0; i < 10;) { //prints numbers ten in a row, with tabs in between.
			printer = counter;
			counter++;

			if (printer % 3 == 0) {
				continue;
			}
			else if (counter > 100) {
				break;
			}
			else {
				printf("%d ", printer);
				i++;
			}
		}
		printf("\n"); //new line
		if (counter > 100)
			break;
	}

	return 0;
}