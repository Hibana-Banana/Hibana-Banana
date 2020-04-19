#include <stdio.h>
#include <Windows.h>
#include <synchapi.h>
#include <misc.h>

int main() {
	int iSel = 1;

	iSel = menu();
	switch (iSel) {
	case 1:
		loading("Loading New World");
		break;
	case 2:
		loading("Loading Files");
		break;
	case 0:
		loading("Quitting");
		break;
	default:
		printf("Unsupported Input!\n");
		break;
	}
}