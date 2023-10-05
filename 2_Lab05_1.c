//2858 ±â¼÷»ç ¹Ù´Ú
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int R, B;
	int area=0;
	scanf("%d %d", &R, &B);
	area = R + B;
	for (int i = 1; i <= area; i++) {
		for (int j = 1; i * j <= area; j++) {
			if (i * j == area) {
				if (i * 2 + (j - 2) * 2 == R) {
					if (i >= j) {
						printf("%d %d", i, j);
					}
				}
			}
		}
	}
	return 0;
}