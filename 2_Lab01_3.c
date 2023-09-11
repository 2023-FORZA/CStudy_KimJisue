#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char word[1000005];
int arr[26];

int main() {
    
    char word[1000005];
    int alph[26];                  //alph[0]은 'a' , alph[25]는 'z'

    int max = 0;
    int size;
    char ans;

    scanf("%s",word);
    size = strlen(word);

    for (int i = 0; i <size; i++) {
        if (word[i] >= 'a')
            alph[word[i]-'a']++;   //단어가 소문자이라면 
        else
            alph[word[i] -'A'] ++; //단어가 대문자라면
    }
    for (int i = 0; i < 26; i++) {
        if (alph[i] == max)
            ans = '?';

        else if (alph[i] > max) {
            max = alph[i];
            ans = 'A' + i;
        }
    }

    printf("%c",ans);
    return 0;
}
