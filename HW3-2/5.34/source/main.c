#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void) {

	int a, b;

	printf("輸入兩個整數 : ");
	scanf_s("%d%d", &a, &b);

	printf("%d^%d=%d\n", a, b, power(a, b));

	system("pause");
	return 0;
}

int power(int a, int b) {

	int x = 1;

	for (int i = 0; i < b; i++) {

		x = x * a;

	}
	return x;
}