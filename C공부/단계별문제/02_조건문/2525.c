//오븐 시계
#include <stdio.h>

int main(){
    int hour, minute, t;

    scanf("%d %d\n%d",&hour,&minute,&t);

    minute += t;
    hour += minute / 60;

    printf("%d %d",hour%24,minute%60);

    return 0;
}