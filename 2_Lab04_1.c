//1292 쉽게 푸는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a,b,sum=0;
	scanf("%d %d", &a, &b);
	int num[1000];
	int cnt=0;
	for (int j =0; j < 1000; j++) {
		for (int i = 0; i <j; i++) {
			if (cnt == 1000)
				break;
			num[cnt] = j;
			cnt++;
		}
	}

	for (int i = a-1; i < b; i++) 
		sum += num[i];
	printf("%d", sum);
	return 0;

}