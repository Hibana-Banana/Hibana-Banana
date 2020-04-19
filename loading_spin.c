#include <stdio.h>
#include <Windows.h>
#include <synchapi.h>
#include <misc.h>

int main() {
	int forever = 1;

	while (forever) {
		loading_spin("Loading");
	}

	return 0;
}