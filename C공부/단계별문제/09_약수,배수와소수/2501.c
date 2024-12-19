//약수 구하기
#include <stdio.h>

int main(){
    int N,K, i, cnt = 0, res = 0;

    scanf("%d %d", &N, &K);

    for(i=1;i<=N;i++) if (N%i==0) {
        cnt++;
        if(cnt==K) {
            res = i;
            break;
        }
    }

    printf("%d",res);

    return 0;
}