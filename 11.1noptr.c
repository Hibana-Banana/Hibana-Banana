#include <stdio.h>

struct Product {
	char* name;
	char* shape;
	char* color;
	int price;
	char* area;
};

scanchar(char* name, char* addr);
scanint(char* name, int* addr);

int main() {
	struct Product product1 = {
		"n",
		"s",
		"c",
		0,
		"a"
	};
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
	printf("enter product %s: ", name);
	scanf("%d", addr);
}
