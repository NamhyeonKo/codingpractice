//그대로 출력하기
#include <stdio.h>
#include <string.h>

int main(){
    char s[101];

    while(gets(s)!=NULL)printf("%s\n", s);

    return 0;
}