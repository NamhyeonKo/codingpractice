//세탁소 사장 동혁
#include <stdio.h>

int main(){
    const int coin[4] = {25,10,5,1};
    float m;
    int T, i,j, C;

    scanf("%d",&T);

    for(i=0;i<T;i++){
        scanf("%d",&C);

        for(j=0;j<4;j++){
            printf("%d ",C/coin[j]);
            C %= coin[j];
        }
        printf("\n");
    }

    return 0;
}