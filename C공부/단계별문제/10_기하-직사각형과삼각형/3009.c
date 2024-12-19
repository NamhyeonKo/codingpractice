//네 번째 점
#include <stdio.h>

int main(){
    int x[1001] = {0,}, y[1001] = {0,};
    int i, a,b;

    for(i=0;i<3;i++){
        scanf("%d %d",&a,&b);
        x[a]++;
        y[b]++;
    }

    for(i=0;i<1001;i++) if(x[i]==1) printf("%d ", i);
    for(i=0;i<1001;i++) if(y[i]==1) printf("%d", i);

    return 0;
}