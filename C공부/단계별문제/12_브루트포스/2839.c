#include <stdio.h>

int main(){
    int a,b , N,i, min, cnt;

    scanf("%d",&N);

    min = N;

    for(i=0;3*i<=N;i++){
        if((N-(3*i))%5==0){
            cnt = i+((N-(3*i))/5);
            if(cnt<min) min = cnt;
        }
    }

    if(min<N)printf("%d",min);
    else printf("-1");

    return 0;
}