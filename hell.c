#include <stdio.h>

int max(int a, int b) {
	return a > b ? a: b;
}

int main() {
	printf("hello git world!");
	printf("The max number is %d!", max(10, 4));
	return 0;
}
