//1925 »ï°¢Çü
#include<stdio.h>
#include<math.h>

typedef struct vector2D
{
	int x;
	int y;
}vector2D;

int main(void)
{
	int max, sum = 0;
	int len[3];
	double slope[3];
	vector2D a, b, c;

	scanf("%d %d", &a.x, &a.y);
	scanf("%d %d", &b.x, &b.y);
	scanf("%d %d", &c.x, &c.y);

	len[0] = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
	len[1] = (b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y);
	len[2] = (c.x - a.x) * (c.x - a.x) + (c.y - a.y) * (c.y - a.y);
	max = len[0] > len[1] ? len[0] : len[1];
	max = max > len[2] ? max : len[2];
	sum += len[0] + len[1] + len[2];

	//	printf("%d %d %d max%d \n", len[0], len[1], len[2], max);

	if (a.x - b.x == 0)
		slope[0] = 9999899;
	else
		slope[0] = (double)(a.y - b.y) / (a.x - b.x);
	if (b.x - c.x == 0)
		slope[1] = 9999899;
	else
		slope[1] = (double)(b.y - c.y) / (b.x - c.x);
	if (c.x - a.x == 0)
		slope[2] = 9999899;
	else
		slope[2] = (double)(c.y - a.y) / (c.x - a.x);

	if (slope[0] == slope[1])
	{
		printf("X");
		return 0;
	}
	if (len[0] == len[1] || len[1] == len[2] || len[2] == len[0])
	{
		if (len[0] == len[1] && len[0] == len[2])
			printf("JungTriangle");
		else if (sum - max == max)
			printf("Jikkak2Triangle");
		else if (sum - max > max)
			printf("Yeahkak2Triangle");
		else if (sum - max < max)
			printf("Dunkak2Triangle");
		return 0;
	}
	else
	{
		if (sum - max == max)
			printf("JikkakTriangle");
		else if (sum - max > max)
			printf("YeahkakTriangle");
		else if (sum - max < max)
			printf("DunkakTriangle");
		return 0;
	}
	return 0;
}