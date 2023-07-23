//1085 직사각형에서 탈출
#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>
int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int num1, num2, num3, num4;
	num1 = h - y;
	num2 = y - 0;
	num3 = x - 0;
	num4 = w - x;
	int num_list[4] = {num1,num2,num3,num4};
	int min;
	min = num_list[0];
	for (int i = 1; i < 4; i++) {
		if (min > num_list[i])
			min = num_list[i];
	}
	printf("%d", min);
	return 0;
}