//알고리즘 수업 - 알고리즘의 수행 시간 5
#include <stdio.h>

int main(){
    long long int n, i,j,k, cnt = 0, degree = 0;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            for(k=0; k<n; k++){
                cnt++;
            }
        }
    }
    degree+=3;

    printf("%lld\n%d",cnt,degree);

    return 0;
}