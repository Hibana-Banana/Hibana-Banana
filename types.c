#include <stdio.h>
#include <ctype.h>

void switchshow(char c);

int main() {
	char cput;
	char ctemp;

	printf("enter first char: ");
	scanf("%c", &cput);
	switchshow(cput);
	ctemp = getchar();

	printf("enter second char: ");
	scanf("%c", &cput);
	switchshow(cput);
	ctemp = getchar();

	printf("enter third char: ");
	scanf("%c", &cput);
	switchshow(cput);

	return 0;
}

void switchshow(char c) {
	if (isalpha(c)) {
		printf("you entered the letter %c\n", c);
	}
	else if (isdigit(c)) {
		printf("you entered the digit %c\n", c);
	}
	else if(isalnum(c)) {
		printf("you entered the alphanumerical %c\n", c);
	}
	else {
		printf("the thing you entered is neither alpha nor numerical\n");
	}
}

