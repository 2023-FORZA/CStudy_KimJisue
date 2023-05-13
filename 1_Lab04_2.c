#include <stdio.h>
int main() {
    int n, i, sum;
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}


