#include <stdio.h>

int globalprice = 100;
void storeprice1();
void storeprice2();
void storeprice3();
void changeprice();

int main() {
	printf("original price: %d\n", globalprice);
	storeprice1();
	storeprice2();
	storeprice3();

	changeprice();

	printf("current price: %d\n", globalprice);
	storeprice1();
	storeprice2();
	storeprice3();
}

void storeprice1() {
	printf("store price: %d\n", globalprice);
}

void storeprice2() {
	printf("store price: %d\n", globalprice);
}

void storeprice3() {
	printf("store price: %d\n", globalprice);
}

void changeprice() {
	printf("enter new price: ");
	scanf("%d", &globalprice);
}