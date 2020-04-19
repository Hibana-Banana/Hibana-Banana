#include <stdio.h>

int main() {
	int num1;
	float num2;
	long num3;
	short num4;
	char chr[10];

	printf("enter an integer: ");
	scanf("%d", &num1);
	printf("enter a float: ");
	scanf("%f", &num2);
	printf("enter a long int: ");
	scanf("%ld", &num3);
	printf("enter a short int: ");
	scanf("%hd", &num4);
	printf("enter 3 letters: ");
	scanf("%c", &chr);

	printf("int: %d \nfloat: %f \nlong: %ld \nshort: %hd \nchar: %3s\n", num1, num2, num3, num4, chr);

	return 0;
}