//2_Lab07_1.c 
//7770 아즈텍 피라미드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a=0, b=0;
	while (a <= n) {
		a += 2 * b * b + 2 * b + 1;
		b++;
	}
	printf("%d", b-1);
	return 0;
}
