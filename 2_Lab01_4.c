#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[10];
	int sum = 0;
	int ans1, ans2, ans;
	for (int i = 0; i < 10; i++)
		scanf("%d\n",&arr[i]);
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
		if (sum == 100) {
			ans = sum;
			break;
		}
		else if (sum > 100) {
			ans1 = sum - 100;
			ans2 = 100 - sum + arr[i];
			if (ans1 > ans2)
				ans = sum - arr[i];
			else
				ans = sum;
			break;
		}
	}
	printf("%d", ans);
	return 0;
}