#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a;

	printf("輸入一個英文字母 : ");
	scanf_s("%c", &a);

	if (a >= 65 && a <= 90) {
		printf("轉換結果 : %c",a+32);
	}

	if (a >= 97 && a <= 122) {
		printf("轉換結果 : %c", a - 32);
	}

	system("pause");
	return 0;
}