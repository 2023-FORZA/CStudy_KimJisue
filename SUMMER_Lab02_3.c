//2309 ÀÏ°ö ³­ÀïÀÌ
#include <stdio.h>

void sort(int* arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[9] = { 0, };
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i != j && (sum - arr[i] - arr[j]) == 100) {
				arr[i] = 100;
				arr[j] = 100;
				sort(arr, 9);
				for (int k = 0; k < 7; k++)
					printf("%d\n", arr[k]);
				return 0;
			}
		}
	}
	return 0;
}