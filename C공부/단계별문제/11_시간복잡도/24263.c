//알고리즘 수업 - 알고리즘의 수행 시간 2
#include <stdio.h>

int main(){
    int n, i, cnt = 0, degree = 0;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        cnt++;
    }
    degree++;

    printf("%d\n%d",cnt,degree);

    return 0;
}