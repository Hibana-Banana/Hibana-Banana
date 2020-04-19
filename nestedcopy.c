#include <stdio.h>

void DisplayNames(char** cnamearr);

char* cnames[] = {
	"aaron",
	"jimmy",
	"charles",
	"sammy",
	"kenny",
	"end"
};

int main() {
	DisplayNames(cnames);

	return 0;
}

void DisplayNames(char** cnamearr) {
	if (*cnamearr == "end") {
		return;
	}
	else {
		//asdf
		printf("%s\n", *cnamearr);
		DisplayNames(cnamearr + 1);
	}
}