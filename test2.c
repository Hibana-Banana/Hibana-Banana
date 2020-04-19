#include <stdio.h>
#include <Windows.h>
#include <synchapi.h>
#include <misc.h>

int main(void) {
	int iCount = 0;
	do {
		iCount++;
	} while (iCount < 10);
	fflush(stdout);
	printf("\rSuccess!\n");

	return 0;
}