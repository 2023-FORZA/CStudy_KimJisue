#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time[3];
	scanf("%d:%d:%d", &time[0], &time[1], &time[2]);

	int ans = 0;
	int cnt = 0;
	for (int i = 0; i < 3; i++)
	{
		if (time[i] <= 12 && time[i] >= 1)
			cnt++;
		if (time[i] > 59)
		{
			cnt = 0;
			break;
		}
	}
	if (cnt == 0) ans = 0;
	else if (time[0] == time[1] && time[1] == time[2] && time[0] == 0) 
		ans == 0;
	else if (cnt == 3) 
		ans = 6;
	else if (cnt == 2) 
		ans = 4;
	else if (cnt == 1) 
		ans = 2;

	printf("%d\n", ans);
	return 0;
}