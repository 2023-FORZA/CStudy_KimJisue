#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int board[4][4];

int main()
{
	int p1, p2, x, y,i, j;
	int win=0, cnt = 0;
	scanf("%d", &p1);

	if (p1 == 1)
		p2 = 2;
	else
		p2 = 1;

	for (i = 1; i <= 9; i++)
	{
		scanf("%d%d", &x, &y);
		if (i % 2 == 1)
			board[x][y] = p1;
		else
			board[x][y] = p2;
		for (j = 1; j <= 3; j++)
		{
			if (board[j][1] == board[j][2] && board[j][2] == board[j][3] && board[j][1] != 0)
			{
				cnt = 1;
				win = board[j][1];
			}
			if (board[1][j] == board[2][j] && board[2][j] == board[3][j] && board[1][j] != 0)
			{
				cnt = 1;
				win = board[1][j];
			}
		}
		if (board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[1][1] != 0)
		{
			cnt = 1;
			win = board[1][1];
		}
		if (board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[1][3] != 0)
		{
			cnt = 1;
			win = board[1][3];
		}
		if (cnt != 0)
		{
			printf("%d", win);
			break;
		}
		else if (i == 9)
			printf("0");
	}
	return 0;
}