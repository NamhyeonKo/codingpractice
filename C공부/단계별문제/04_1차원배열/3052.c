//나머지
#include <stdio.h>

int main(){
    int num[10] = {0,}, i,j, cnt = 0;

    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
        num[i] %= 42;
    }

    for (i=0;i<10;i++){
        for(j=0;j<i;j++){
            if(num[j] == num[i]) {
                cnt -= 1;
                break;
            }
        }
        cnt++;
    }

    printf("%d",cnt);

    return 0;
}