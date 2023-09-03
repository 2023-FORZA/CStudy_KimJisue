#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n1, n2;
	scanf("%d", &n1);

	n2 = 1000 - n1;
	
	int m[6] = { 500,100,50,10,5,1 };
	int i=0, cnt = 0;
	while (n2 > 0) {
		if (n2 - m[i] >= 0) {
			n2 -= m[i];
			cnt++;
		}
		else
			i++;
	}
	printf("%d", cnt);

	return 0;
}