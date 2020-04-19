#include <stdio.h>

int main() {
	float total, base, perc;
	int sold;

	printf("enter the base pay: ");
	scanf("%f", base);
	printf("enter the number of items sold: ");
	scanf("%d", sold);
	
	perc = 1.5 * sold;
	total = base + perc;

	printf("the total wage is: %f", total);

	return 0;
}