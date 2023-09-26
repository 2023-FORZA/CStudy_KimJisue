//1919 애너그램 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char word1[1000], word2[1000];
	scanf("%s\n", &word1);
	scanf("%s", &word2);

	int count = strlen(word1) + strlen(word2);
	for (int i = 0; i < strlen(word1); i++) {
		for (int j = 0; j < strlen(word2); j++) {
			if (word1[i] == word2[j]) {
				word1[i] = -1;
				word2[j] = -2;
				count -= 2;
			}	
		}
	}
	printf("%d", count);
	return 0;
}