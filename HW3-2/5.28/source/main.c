#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a;

	printf("��J�@�ӭ^��r�� : ");
	scanf_s("%c", &a);

	if (a >= 65 && a <= 90) {
		printf("�ഫ���G : %c",a+32);
	}

	if (a >= 97 && a <= 122) {
		printf("�ഫ���G : %c", a - 32);
	}

	system("pause");
	return 0;
}