#include <stdio.h>

main(int argc, char* argv[]) {
	printf("list of parameters: ");
	printf("%s\n", *argv);
	printf("number of parameters: ");
	printf("%d\n", argc);
}