//1032_명령프롬프트
#include <stdio.h>
#include <string.h>

int main() {
    char text[50];
    char cmp[50];
    int N;
    scanf("%d", &N);
    scanf("%s", &text);
    for (int i = 1; i < N; i++) {
        scanf("%s", &cmp);
        int j = 0;
        while (text[j])
        {
            if (text[j] != cmp[j])  text[j] = '?';
            j++;
        }
    }
    printf("%s", text);
    return 0;
}