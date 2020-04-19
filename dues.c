#include <stdio.h>

int main() {
	float dues, amt;
	int ontime;
	char sel;

	printf("Enter dues: ");
	scanf("%f", &dues);
	printf("On time (y/n): ");
	getchar();
	sel = getchar();

	ontime = (sel == 'y') ? 1 : 0;
	amt = ontime ? dues : (dues * 1.1);
	printf("the amount due is: %.2f\n", amt);

	return 0;
}