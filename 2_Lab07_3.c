//2_Lab07_3.c
//9226 µµ±úºñ¸»
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char word[100];
	char temp[100];
	int i, j;
	while (1){
		scanf("%s", &word);
		if (word[0] == '#')
			return 0;
		int x = strlen(word);
		for (i = 0; i < x; i++) {
			if (!(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'))
				temp[i] = word[i];
			else 
				break;
		}
		for (j = i; j < x; j++) {
			printf("%c", word[j]);
		}
		for (j = 0; j < i; j++) {
			printf("%c", word[j]);
		}
		printf("ay\n");
	}
}