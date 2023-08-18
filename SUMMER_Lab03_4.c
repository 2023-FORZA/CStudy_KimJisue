#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, test;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &test);
		for (int k = 0; k < test; k++) {
			for (int j = 0; j < test; j++) {
				if ((k == 0) || (k == (test - 1))) {
					printf("#");
				}
				else if ((j == 0) || (j == (test - 1))) {
					printf("#");
				}
				else {
					printf("J");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}