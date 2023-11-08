#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int customer,n, i, j, no_seat=0;
	int seat[101] = { 0 };
	customer = 0;
	scanf("%d", &n);
	for (i = 0; customer < n; i++) {
		scanf("%d", &seat[i]);
		customer++;
		for (j = 0; j < i; j++) {
			if (seat[i] == seat[j]) {
				i--;  //
				no_seat++;
				break;
			}
		}
	}
	printf("%d", no_seat);
}