//2869 �����̴� �ö󰡰� �ʹ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A, B, V;
	int cnt_day=0;
	scanf("%d %d %d", &A, &B, &V);
	cnt_day = (V - A) / (A - B);
	if ((V - A) % (A - B) > 0)
		cnt_day++;
	printf("%d", cnt_day+1);
	return 0;
}


//�ð� �ʰ� �ڵ�
/*int main() {
	int A, B, V;
	int cnt_day=1;
	scanf("%d %d %d", &A, &B, &V);
	while (1) {
		if ((A - B) * cnt_day + A >= V)
			break;
		else 
			cnt_day++;
	}
	printf("%d", cnt_day+1);
	return 0;
}*/