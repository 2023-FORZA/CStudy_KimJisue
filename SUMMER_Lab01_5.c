//3062 수 뒤집기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int reverse(int n) {
	int r = 0;
	while (n != 0) {
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	return r;
}
bool check(int num) {
	int r= reverse(num);
	int total = num + r;
	int temp = total;
	int sum = 0;

	while (temp != 0) {
		sum = sum * 10 + temp % 10;
		temp /= 10;
	}

	return total == sum;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N;
		scanf("%d", &N);

		if (check(N)) 
			printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}