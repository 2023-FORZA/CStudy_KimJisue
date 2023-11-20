//2_Lab08_3.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char binary[1000001];
int main() {
	scanf("%s", &binary);
	int len = strlen(binary);
	int s;

	if (binary[0] - 48 == 0)
		printf("0");
	else{
		if (len % 3 == 1)
		{
			printf("1");
			s = 1;
			for (int i = 0; i < (len/3); i++)
			{
				printf("%d", 4 * (binary[s + 3 * i] - 48) + 2 * (binary[s + 3 * i + 1] - 48) + (binary[s + 3 * i + 2] - 48));
			}
		}
		else if (len % 3 == 2)
		{
			printf("%d", 2 * (binary[0] - 48) + binary[1] - 48);
			s = 2;
			for (int i = 0; i < (len / 3); i++)
			{
				printf("%d", 4 * (binary[s + 3 * i] - 48) + 2 * (binary[s + 3 * i + 1] - 48) + (binary[s + 3 * i + 2] - 48));
			}
		}
		else
		{
			s = 0;
			for (int i = 0; i < (len / 3); i++)
			{
				printf("%d", 4 * (binary[s + 3 * i] - 48) + 2 * (binary[s + 3 * i + 1] - 48) + (binary[s + 3 * i + 2] - 48));
			}
		}
	}
	
	return 0;
}

