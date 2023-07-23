#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int A[1000005];
int B[1000005];

int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last)
		return 0;
	mid = (first + last) / 2;

	if (ar[mid] == target)
		return 1;
	else if (target < ar[mid])
		return BSearchRecur(ar, first, mid - 1, target);
	else
		return BSearchRecur(ar, mid + 1, last, target);
}

void MergeTwoArea(int arr[], int left, int mid, int right)
{
	int fIdx = left;
	int rIdx = mid + 1;
	int i;

	int* sortArr = (int*)malloc(sizeof(int) * (right + 1));
	int sIdx = left;

	while (fIdx <= mid && rIdx <= right)
	{
		if (arr[fIdx] <= arr[rIdx])
			sortArr[sIdx] = arr[fIdx++];
		else
			sortArr[sIdx] = arr[rIdx++];

		sIdx++;
	}

	if (fIdx > mid)
	{
		for (i = rIdx; i <= right; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}
	else
	{
		for (i = fIdx; i <= mid; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}

	for (i = left; i <= right; i++)
		arr[i] = sortArr[i];

	free(sortArr);
}

void  MergeSort(int arr[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;

		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);

		MergeTwoArea(arr, left, mid, right);
	}
}

int main(void)
{
	int N, M, i, T, j;
	scanf("%d", &T);

	for (j = 0; j < T; j++)
	{
		scanf("%d", &N);
		for (i = 0; i < N; i++)
			scanf("%d", &A[i]);

		scanf("%d", &M);
		for (i = 0; i < M; i++)
			scanf("%d", &B[i]);

		MergeSort(A, 0, N - 1);

		for (i = 0; i < M; i++)
		{
			if (BSearchRecur(A, 0, N - 1, B[i]) != 0)
				printf("1\n");
			else
				printf("0\n");
		}
	}

	return 0;
}