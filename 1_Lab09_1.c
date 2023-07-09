//8985 OXÄûÁî
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int N;                              
	scanf("%d", &N);
	char score[80];
	int* sum;
	sum = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &score);
		int a = 0;
		int sum = 0;
		for (int k = 0; score[k] != NULL; k++) {

			if (score[k] == 'O') {
				a++;
				sum += a;
			}
			else 
				a = 0;
		}
		printf("%d\n", sum);
	}
	free(sum);
	return 0;
}
// score -> ooxooxoo (¹®ÀÚ)
// sum -> 1+2+0+1+2+0+1+2 =9

