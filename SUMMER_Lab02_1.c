//1110 더하기 사이클
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a, b, c = n, cnt = 0;
    do {
        a = c / 10;
        b = c % 10;
        c = a + b;
        c = b * 10 + c % 10;
        cnt++;
    } while (c != n);
    printf("%d", cnt);
    return 0;
}