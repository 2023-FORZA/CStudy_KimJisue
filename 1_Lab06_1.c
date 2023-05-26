#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int M;
	scanf("%d", &M);

	int cup[3] = { 1,2,3 };  //컵1에 공 있음
	int X, Y;
	int temp; // 위치 변경을 위한 임시변수
	for (int i = 1; i <= M; i++) {
		scanf("%d %d", &X, &Y);    //위치를 바꿀 컵 
		temp = cup[X - 1];           //배열은 0부터 시작함!! -1 해주기
		cup[X - 1] = cup[Y - 1];
		cup[Y - 1] = temp;

	}
	for (int j = 0; j < 3; j++) {       //공이 들어있는 컵 찾기
		if (cup[j] == 1)
			printf("%d", j + 1);
	}
	return 0;
}

