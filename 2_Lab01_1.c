#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int n;

void count(int a, int first, int second, int third) {
	if (a == 1) {
		n++;
		return;
	}
	else {
		count(a - 1, first, third, second);
		n++;
		count(a - 1, second, first, third);
	}
}

void hanoi(int a, int first, int second, int third) {
	if (a == 1) {
		printf("%d %d\n", first, third);
		return;
	}
	hanoi(a - 1, first, third, second);
	printf("%d %d\n", first, third);
	hanoi(a - 1, second, first, third);
}

int main() {
	int first = 1;
	int second = 2;
	int third = 3;
	int a;
	scanf("%d",&a);
	count(a, first, second, third);
	printf("%d\n", n);
	hanoi(a, first, second, third);
	return 0;
}

















