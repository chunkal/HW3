#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b;

	printf("��J��Ӽ� : ");
	scanf_s("%d%d", &a, &b);

	for (int i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			printf("�̤p�����Ƭ� : %d\n", i);
			break;
		}
	}

	system("pause");
	return 0;
}