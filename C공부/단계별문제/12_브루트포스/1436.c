#include <stdio.h>

int main(){
    int cnt = 0, N, k = 666, l;

    scanf("%d",&N);

    while(cnt<N){
        l = k;
        while(l>=666){
            if(l%1000==666){
                cnt++;
                break;
            }
            l /= 10;
        }
        if(cnt==N){
            printf("%d",k);
            break;
        }
        k++;
    }

    return 0;
}