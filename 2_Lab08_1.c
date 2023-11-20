//2_Lab08_1.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
 int htoi(char a) {
    int n = 0;
    int i = 0;

   if (a >= '0' && a <= '9') {
       n = 16 * n + (a - '0');
       i++;
   }
   if (a >= 'A' && a <= 'F') {
        n = 16 * n + (a - 'A' + 10);
        i++;
    }
    return n;
}
int main() {
    char a;
    scanf("%c", &a);
    printf("%d\n", htoi(a));
}
 */
int main() {
    int a;
    scanf("%x", &a);
    printf("%d", a);
    return 0;

}