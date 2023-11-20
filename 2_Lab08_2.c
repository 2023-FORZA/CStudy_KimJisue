//2_Lab08_2.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char arr[100];
    while (scanf("%s", arr) != '#') {
        if (arr[0] == '#') {
            break;
        }
        int len = strlen(arr);
        int i = 0;
        int result = 0;
        int change;
        while (len != 0) {
            char str = arr[i];
            switch (str) {
            case '-':
                change = 0;
                break;
            case '\\':
                change = 1;
                break;
            case '(':
                change = 2;
                break;
            case '@':
                change = 3;
                break;
            case '?':
                change = 4;
                break;
            case '>':
                change = 5;
                break;
            case '&':
                change = 6;
                break;
            case '%':
                change = 7;
                break;
            case '/':
                change = -1;
                break;
            }
            result += change * pow(8, len - 1);
            len--;
            i++;
        }
        printf("%d\n", result);
    }
    return 0;
}

