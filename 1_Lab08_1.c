#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int h[51] = { 0 }; // Å°
	int w[51] = { 0 }; // ¸ö¹«°Ô 
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &h[i], &w[i]);
	}

	int rank = 1;
	for (int i = 0; i < N; i++) {
		rank = 1;
		for (int j = 0; j < N; j++) {
			if ((h[i] < h[j]) && (w[i] < w[j]))
				rank++ ;
		}
		printf("%d ", rank);
	}
	return 0;
}