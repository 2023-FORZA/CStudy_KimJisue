//2_Lab08_4.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", r(r(a) + r(b)));
	return 0;
}
int r(int n) {
    int sum = 0;
    while (n)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum;
}