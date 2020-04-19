#include <stdio.h>

struct Product {
	char* name;
	char* shape;
	char* color;
	int price;
	char* area;
};

scanchar(char* name, char** addr);
scanint(char* name, int* addr);

int main() {
	struct Product product1 = {
		"",
		"",
		"",
		0,
		""
	};

	char** name1 = &product1.name, ** shape1 = &product1.shape, ** color1 = &product1.color, ** area1 = &product1.area;
	int* price1 = &product1.price;

	scanchar("name", name1);
	scanchar("shape", shape1);
	scanchar("color", color1);
	scanint("price", price1);
	scanchar("area", area1);

	printf("Name: %s\n", *name1);
	printf("Shape: %s\n", *shape1);
	printf("Color: %s\n", *color1);
	printf("Price: %d\n", *price1);
	printf("Area: %s\n", *area1);

	return 0;
}

scanchar(char* name, char** addr) {
	printf("enter product %s: ", name);
	scanf("%s", *addr);
}

scanint(char* name, int* addr) {
	printf("enter product %s: ", name);
	scanf("%d", addr);
}
