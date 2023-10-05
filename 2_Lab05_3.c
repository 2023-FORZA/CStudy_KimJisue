//1173 운동
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int N, m, M, T, R; //T:운동 R:휴식
	int cnt_time = 0, cnt_workout = 0;
	scanf("%d %d %d %d %d", &N, &m, &M ,&T, &R);
	int pulse = m;

	if (m + T > M) {
		printf("%d", -1);
		return 0;
	}
	while (1) {
		if (pulse + T <= M) {
			cnt_workout++;
			pulse += T;
		}
		else {
			pulse -= R;
			if (pulse < m)
				pulse = m;
		}
		cnt_time++;
		if (cnt_workout == N) {
			printf("%d", cnt_time);
			break;
		}
	}
	return 0;
}