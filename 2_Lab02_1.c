#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);

	int score[10002];
	
	int max = score[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", &score[i]);
		if (max < score[i])
			max = score[i];
	}
	double sum=0;
	for (int i = 0; i < num; i++) {
		sum +=(double)score[i] / max * 100;
	}
	double average = sum / num;
	printf("%f\n", average);   //\n
	return 0;

}