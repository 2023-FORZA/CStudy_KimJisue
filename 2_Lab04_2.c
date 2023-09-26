//23055 공사장 표지판
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i == 1 || i == n) {
			for (int j = 1; j <= n; j++) {
				printf("*");
			}
		}
		else {
			for (int j = 1; j <= n; j++) {
				if (j == 1 || j == n)
					printf("*");
				else if (i == j)
					printf("*");
				else if (i + j - 1 == n)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
