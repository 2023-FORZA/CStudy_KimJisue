//2_Lab07_4.c
//4740 �ſ�, ��! �ſ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char a[101];
	int i;
	while (1) {
		gets(a);
		
		if (strcmp(a, "***")== 0) {
			break;
		}

		int k = strlen(a);
		for (i = k - 1; i >= 0; --i) {
			printf("%c", a[i]);
		}
		printf("\n");
	}
}
//���������Ϸ��� gets()�̿�