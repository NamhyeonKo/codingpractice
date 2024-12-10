//문자열
#include <stdio.h>
#include <string.h>

int main(){
    char word[1001];
    int T, i;

    scanf("%d\n",&T);

    for(i = 0;i<T;i++){
        gets(word);
        printf("%c%c\n",word[0],word[strlen(word)-1]);
    }

    return 0;
}