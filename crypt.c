#include <stdio.h>
#include <string.h>

int main() {
	int i, enter;
	int count = 0;
	char cText[128] = { '\0' };
	char cCrypt[128] = { '\0' };
	
	printf("enter command: ");
	scanf("%d", &enter);

	//the following is a switch case
	switch (enter) {
	case 1: //encrypt string
		printf("enter string: ");
		scanf("%s", &cText);
		count = strlen(cText);
		for (i = 0; i < count; i++) {
			cCrypt[i] = cText[i] + i + 5;
		}
		cCrypt[i] = '\0';
		//output encryption
		printf("encrypted string: %s\n", cCrypt);
		break;
	case 2: //decrypt string
		printf("enter string: ");
		scanf("%s", &cText);
		count = strlen(cText);
		for (i = 0; i < count; i++) {
			cCrypt[i] = cText[i] - i - 5;
		}
		cCrypt[i] = '\0';
		//output decryption
		printf("encrypted string: %s\n", cCrypt);
		break;
	case 3: //exit
		break;
	default: //incorrect commands
		printf("invalid syntax! enter 1 for encryption, 2 for decryption, 3 to exit");
		break;
	}

	return 0;
}