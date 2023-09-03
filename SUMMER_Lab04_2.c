#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);
    int sum = strlen(arr);
    for (int i = 0; i < len; i++) {
        if ((arr[i] == 'c') && (arr[i + 1] == '=') || (arr[i + 1] == '-')) {
            sum--;
        }
        else if ((arr[i] == 'd') && ((arr[i + 1] == 'z') && arr[i + 2] == '=') || (arr[i + 1] == '-')) {
            sum--;
        }
        else if ((arr[i] == 'l') && (arr[i + 1] == 'j')) {
            sum--;
        }
        else if (arr[i] == 'n' && arr[i + 1] == 'j') {
            sum--;
        }
        else if ((arr[i] == 's') && (arr[i + 1] == '=')) {
            sum--;
        }
        else if ((arr[i] == 'z') && (arr[i + 1] == '=')) {
            sum--;
        }
    }
    printf("%d", sum);

    return 0;
}