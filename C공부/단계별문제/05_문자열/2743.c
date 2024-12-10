//단어 길이 재기
#include <stdio.h>
#include <string.h>

int main(){
    char word[101];

    gets(word);
    printf("%d",strlen(word));

    return 0;
}