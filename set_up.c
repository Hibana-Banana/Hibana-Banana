#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <misc.h>

int main() {
	printf("Deleting deltest.txt	");
	system("del D:\\Windows\\Desktop\\deltest.txt");
	printf("[done]\n");
	printf("Deleting deltest2.txt	");
	system("del D:\\WIndows\\Desktop\\deltest2.txt");
	printf("[done]\n");
	printf("Success!\n");
}