//중앙 이동 알고리즘
#include <stdio.h>
#include <math.h>

int main(){
    int N, i, k = 2;

    scanf("%d",&N);

    for(i=1; i<=N; i++){
        k += k-1;
    }
    printf("%d",k*k);

    return 0;
}