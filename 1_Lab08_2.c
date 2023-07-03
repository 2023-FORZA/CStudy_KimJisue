#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[11];
	int k,e,m;
}str;

str arr[100000];

int cmp(const void* a, const void* b)
{
	str A = *(str*)a;
	str B = *(str*)b;

	if (A.k == B.k) {
		if (A.e== B.e)
		{
			if (A.m == B.m)
				return strcmp(A.name, B.name);
			else
				return A.m < B.m;
		}
		else
			return A.e > B.e;
	}
	else
		return A.k < B.k;
}

int main(void)
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", &arr[i].name, &arr[i].k, &arr[i].e, &arr[i].m);
	}
	qsort(arr, n, sizeof(str), cmp);
	for (i = 0; i < n; i++)
		printf("%s\n", arr[i].name);
	return 0;
}
