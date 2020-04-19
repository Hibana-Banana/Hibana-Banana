#include <stdio.h>

int main() {
	float cel, fah;
	printf("enter temp in fahrenheit: ");
	scanf("%f", &fah);
	cel = (fah - 32) * 5 / 9;

	printf("\ntemp in celsius is: %f degrees\n", cel);

	return 0;
}