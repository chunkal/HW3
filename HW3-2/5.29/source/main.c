#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b;

	printf("輸入兩個數 : ");
	scanf_s("%d%d", &a, &b);

	for (int i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			printf("最小公倍數為 : %d\n", i);
			break;
		}
	}

	system("pause");
	return 0;
}