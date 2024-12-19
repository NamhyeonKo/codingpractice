//소수 찾기
#include <stdio.h>

int main(){
    int N, i,j, cnt = 0, num;
    int isnot_prime[1001] = {0,};

    scanf("%d",&N);

    isnot_prime[0] = isnot_prime[1] = 1;
    for(i=2;i<=1000;i++) for(j=2;j<i;j++) if(i%j==0) {
        isnot_prime[i] = 1;
        break;
    }

    for(i = 0;i<N;i++) {
        scanf("%d",&num);
        if(isnot_prime[num]==0) cnt++;
    }

    printf("%d",cnt);

    return 0;
}