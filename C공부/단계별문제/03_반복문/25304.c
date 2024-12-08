//영수증
#include <stdio.h>

int main(){
    int X,N, a,b, sum = 0, i;

    scanf("%d\n%d",&X,&N);

    for(i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        sum += a*b;
    }

    if(sum==X) printf("Yes");
    else printf("No");
}