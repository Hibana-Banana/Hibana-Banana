#include <stdio.h>

void dispray(char** cnamearr);

char* cnames[] = {
	"aaron",
	"jimmy",
	"charles",
	"sammy",
	"kenny",
	"enddy"
};

int main() {
	dispray(cnames);

	return 0;
}

void dispray(char** cnamearr) {
	if (*cnamearr == "enddy") {
		return;
	}
	else {
		dispray(cnamearr + 1);
		printf("%s\n", *cnamearr);
	}
}