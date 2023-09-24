#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, a, b, c;
int mins = 999999999;

int main(void) {
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			for (j = i; j <= n; j++) {
				if ((n / i) % j == 0) {
					if (mins > 2 * (i * j + j * (n / (i * j)) + (n / (i * j)) * i)) {
						mins = 2 * (i * j + j * (n / (i * j)) + (n / (i * j)) * i);
						a = i; b = j; c = (n / (i * j));
					}
				}
			}
		}
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}





/*
a*b*c=N
∞—≥–¿Ã: 2*(a*b + b*c +a*c) 
*/