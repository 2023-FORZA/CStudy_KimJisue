//10820 문자열 분석
#include <stdio.h>
#include <string.h>

int main()
{
	while (1) {
		char sen[101] = { 0 };
		scanf("%[^\n]s", sen);
		if (sen[0] == '\0') {
			break;
		}
		int len = strlen(sen);
		int small = 0, capital = 0, space = 0, num = 0;
		for (int j = 0; j < len; j++) {
			if (sen[j] >= 'a' && sen[j] <= 'z') small++;
			
			else if (sen[j] >= '0' && sen[j] <= '9') num++;
			
			else if (sen[j] >= 'A' && sen[j] <= 'Z') capital++;
			
			else if (sen[j] == ' ') space++;
			
		}
		printf("%d %d %d %d\n", small, capital, num, space);
		scanf("%*c");
	}
	return 0;
}