//1297 TVÅ©±â
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int D, W, H;
	float r_W, r_H, x;
	scanf("%d %d %d", &D, &W, &H);
	x = sqrt((pow(D, 2) / ((pow(H, 2)+ pow(W, 2)))));
	r_W = x * W;
	r_H = x * H;

	printf("%d %d", (int)r_W, (int)r_H);
}