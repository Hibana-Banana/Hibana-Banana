#include <stdio.h>

int main() {

int a, b = 105, 2555;

if a > b {
int c = b;
b = a;
a = c;
}

do {
c = a % b;
a = b;
b = c;
} while(c != 0);

printf("%f", a);

return 0;
}