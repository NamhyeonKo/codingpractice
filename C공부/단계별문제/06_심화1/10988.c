//팰린드롬인지 확인하기
#include <stdio.h>
#include <string.h>

int main(){
    char word1[101], word2[101];
    int i, len;

    gets(word1);
    len = strlen(word1);

    for(i = 0; i < len; i++) word2[len-i-1] = word1[i];
    word2[len] = '\0';

    if(strcmp(word2, word1)==0) printf("1");
    else printf("0");

    return 0;
}