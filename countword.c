#include <stdio.h>

int main() {
	char cStr[100];
	int i, wcount = 1;
	gets(cStr);

	if (cStr[0] == '\0') {
		printf("es gibt kein char!\n");
	}
	else if (cStr[0] == ' ') {
		printf("first char is blank\n");
	}
	else {
		i = 0;
		while (cStr[i] != '\0') {
			if (cStr[i] = ' ') wcount++;

			printf("%d\n", wcount);
			i++;
		}
	}

	return 0;
}