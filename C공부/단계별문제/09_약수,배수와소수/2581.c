//소수
#include <stdio.h>

int main(){
    int N,M, i,j, min = 10001, s = 0;
    int isnot_prime[10001] = {0,};

    isnot_prime[0] = isnot_prime[1] = 1;
    for(i=2;i<=10000;i++) for(j=2;j<i;j++) if(i%j==0) {
        isnot_prime[i] = 1;
        break;
    }

    scanf("%d %d",&M,&N);

    for(i=M;i<=N;i++){
        if(isnot_prime[i]==0){
            s += i;
            if(i<=min) min = i;
        }
    }

    if (min==10001) printf("-1");
    else printf("%d\n%d",s, min);

    return 0;
}