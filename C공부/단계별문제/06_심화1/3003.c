//킹,퀸,룩,비숍,나이트,폰
#include <stdio.h>

int main(){
    int chess[6] = {1,1,2,2,2,8}, dongchess[6], i;

    for(i=0;i<6;i++)scanf("%d",&dongchess[i]);
    for(i=0;i<6;i++)printf("%d ",chess[i]-dongchess[i]);

    return 0;
}