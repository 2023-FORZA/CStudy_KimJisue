//11720 숫자의 합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //동적할당 malloc을 위한 헤더
#include <string.h> // strcpy을 위한 헤더
int main(void) {
	int N;
	scanf("%d", &N);                               //숫자 개수 입력받기

	int sum;
	sum = 0;

	char a[101];
	scanf("%s", a);                                // N개의 수 입력 받기 //공백없이 입력받아야함

	char* num = (char*)malloc(N * sizeof(char));   //N개 * 8비트 만큼 힙 메모리 할당
	strcpy(num, a);                                //a에 있는 문자열 전체를 num에 복사


	for (int i = 0; i <N; i++) {                   
		sum += num[i] - '0';                       //합 구하기
	}
	free(num);                                     // 메모리 해제
	printf("%d", sum);                             // 합 출력
	return 0;   
}