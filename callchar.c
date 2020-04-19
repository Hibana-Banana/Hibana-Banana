#include <stdio.h>
#include <stdlib.h>

void out(char* bottle);

int main() {
	char poke[] = "";
	printf("give: ");
	scanf("%s", &poke);
	//printf("outs: %s\n", poke);
	out(poke);
	
	return 0;
}

void out(char* bottle) {
	printf("outs: %s\n", bottle);
}