#include <stdio.h>
#include <stdlib.h>

struct Product {
	char name[50];
	char shape[50];
	char color[50];
	int price;
	char area[50];
};

scanchar(char* name, char* addr);
scanint(char* name, int* addr);

int main() {
	struct Product product1;
	//char** name1 = &product1.name, ** shape1 = &product1.shape, ** color1 = &product1.color, ** area1 = &product1.area;
	//int* price1 = &product1.price;

	scanchar("name", product1.name);
	scanchar("shape", product1.shape);
	scanchar("color", product1.color);
	scanint("price", &product1.price);
	scanchar("area", product1.area);

	printf("Name: %s\n", product1.name);
	printf("Shape: %s\n", product1.shape);
	printf("Color: %s\n", product1.color);
	printf("Price: %d\n", product1.price);
	printf("Area: %s\n", product1.area);

	return 0;
}

scanchar(char* name, char* addr) {
	printf("enter product %s: ", name);
	scanf("%s", addr);
}

scanint(char* name, int* addr) {
	do {
		printf("enter product %s: ", name);
		scanf("%d", addr);
	} while (!isdigit(*addr));
}
