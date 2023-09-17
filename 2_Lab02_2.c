#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[10];
	int n, temp;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		for (int j=0; j < 10; j++) {
			scanf("%d", &a[j]);
		}
		for (int k = 0; k < 9; k++) {
			for (int l = 0; l < 9 - k; l++) {
				if (a[l] > a[l + 1]) {
					temp = a[l];
					a[l] = a[l + 1];
					a[l + 1] = temp;
				}
			}
		}
		printf("%d\n", a[7]);
	}
	return 0;
}