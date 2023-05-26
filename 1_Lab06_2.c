#include <stdio.h>
#define _CRT_SECURE_N0_WARNINGS
int main(void) {
	int N;
	scanf("%d", &N);
	int arr[50] = { 0, };
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	for (int j = 0; j < N; j++) {
		if (arr[j] > max)
			max = arr[j];
		if (arr[j] < min)
			min = arr[j];
	}
	printf("%d", min * max);
	return 0;
}