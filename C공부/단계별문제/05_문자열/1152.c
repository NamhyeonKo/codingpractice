//단어의 개수
#include <stdio.h>
#include <string.h>

int main(){
    char s[1000001];
    int len, i, w = 1;

    gets(s);
    len = strlen(s);

    for(i=0;i<len;i++) if(s[i]==' ') w++;

    if(s[0]==' ') w--;
    if(s[len-1]==' ') w--;

    printf("%d",w);

    return 0;
}