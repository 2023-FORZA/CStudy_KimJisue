#include <stdio.h>
int main() {
	int num;
	int a[100];
	int v;
	int count = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);
	for (int j = 0; j < num; j++) {
		if (a[j] == v)
			count++;
	}
	printf("%d", count);
	return 0;
}