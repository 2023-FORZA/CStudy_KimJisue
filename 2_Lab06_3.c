#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int max(int a, int b);
int min(int a, int b);
int calculate(int a, int b, int c, int d, int price);

int monitor_num, rh, rv, sh, sv, rhi, rvi, shi, svi, pi, result = 2147483647, tem;

int main() {

    scanf("%d %d %d %d", &rh, &rv, &sh, &sv);
    scanf("\n%d", &monitor_num);

    for (int j = 0; j < monitor_num; j++) {
        scanf("\n%d %d %d %d %d", &rhi, &rvi, &shi, &svi, &pi);

        result = min(result, min(calculate(rhi, rvi, shi, svi, pi), calculate(rvi, rhi, svi, shi, pi)));
    }

    printf("%d\n", result);
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int calculate(int a, int b, int c, int d, int price) {
    int highest_h, highest_v;

    highest_h = max(ceil((double)rh / a), ceil((double)sh / c));

    highest_v = max(ceil((double)rv / b), ceil((double)sv / d));

    return highest_h * highest_v * price;
}