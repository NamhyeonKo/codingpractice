//분해합
#include <stdio.h>

int main(){
    int N, sum, i,num;

    scanf("%d",&N);

    for(i=1;i<=N;i++){
        num = i;
        sum = num;
        while(num>0){
            sum += num % 10;
            num /= 10;
        }
        if (sum == N) break;
    }

    if(i>N) printf("0");
    else printf("%d",i);

    return 0;
}