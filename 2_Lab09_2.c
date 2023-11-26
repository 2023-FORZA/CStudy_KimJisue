//2_Lab09_2.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N;
	char r[111][111];
	int h = 0, v = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", r[i]);
	}
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (r[i][j] == '.')
				cnt++;
			else {
				if (cnt >= 2)
					h++;
				cnt = 0;
			}
		}
		if (cnt >= 2)
			h++;
	}
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (r[j][i] == '.')
				cnt++;
			else {
				if (cnt >= 2)
					v++;
				cnt = 0;
			}
		}
		if (cnt >= 2)
			v++;
	}
	printf("%d %d\n", h, v);
	return 0;
}