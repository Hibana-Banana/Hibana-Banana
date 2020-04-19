#include <stdio.h>

int main() {
	int num;
	printf("enter num: ");
	scanf("%d", &num);

	if (isdigit(num)) {
		printf("num is digit\n");
	}
	else {
		printf("num is not digit\n");
		printf("enter num: ");
		scanf("%d", &num);
	}

	return 0;
}