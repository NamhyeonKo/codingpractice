//알고리즘 수업 - 알고리즘의 수행 시간 6
#include <stdio.h>

int main(){
    long long int n, i,j,k, cnt = 0, degree = 0;

    scanf("%d",&n);

    for(i=0; i<n-2; i++){
        cnt += (n-2-i) * (i+1);
    }
    degree+=3;

    printf("%lld\n%d",cnt,degree);

    return 0;
}