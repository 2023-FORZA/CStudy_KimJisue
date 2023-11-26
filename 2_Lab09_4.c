//2_Lab09_4.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char chess[8][8];
	int count = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s\n", &chess[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && chess[i][j] == 'F')
				count++;
		}
	}
	printf("%d", count);
	return 0;
}