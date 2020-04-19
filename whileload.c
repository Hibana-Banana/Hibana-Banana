#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <synchapi.h>
#include <misc.h>

int main() {
	int iCount = 0;
	system("loading.bat");

	do {
		iCount++;
	} while (iCount < 10);
	fflush(stdout);
	printf("\rSuccess!\n");

	system("kill.bat");

	return 0;
}