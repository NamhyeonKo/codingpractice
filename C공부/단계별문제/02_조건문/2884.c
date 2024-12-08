//알람 시계
#include <stdio.h>

int main(){
    int hour, minute;

    scanf("%d %d",&hour,&minute);
    minute -= 45;

    if(minute < 0){
        hour -= 1;
    }

    hour += 24;
    minute += 60;

    printf("%d %d",hour%24, minute%60);

    return 0;
}