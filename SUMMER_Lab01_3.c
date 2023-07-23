//1094 ¸·´ë±â
#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
int main() {
	int X;
	int sum=0 ;
	scanf("%d", &X);
	while (X > 0) {
		if (X % 2 == 1)
			sum++;
		X /= 2;
	}
		printf("%d", sum);
	return 0;
}