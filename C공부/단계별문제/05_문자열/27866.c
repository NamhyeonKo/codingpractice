//문자와 문자열
#include <stdio.h>
#include <string.h>

int main(){
    char word[1001];
    int i;

    gets(word);
    scanf("%d",&i);

    printf("%c",word[i-1]);

    return 0;
}