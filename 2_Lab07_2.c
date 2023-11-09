//2_Lab07_2.c
//1009 분산처리
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, a, b;
	int ans;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		ans = a;
		for (int j = 0; j < b-1; j++) {
			ans = ans * a % 10;
		}
		if (ans %10 == 0)
			printf("%d\n",10);
		else
			printf("%d\n", ans%10);
	}
	return 0;
}
