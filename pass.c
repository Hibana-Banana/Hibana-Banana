#include <misc.h>
#include <string.h>
#include <stdio.h>
#include <Windows.h>

int main() {
	char pass[128];
	char cryp[128];

	printf("enter new password: ");
	scanf("%s", &pass);

	strcpy(cryp, crypt(1, pass);
	printf("the encrypted string is: %s\n", cryp);

	return 0;
}