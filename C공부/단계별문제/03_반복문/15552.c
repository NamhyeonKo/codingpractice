//빠른 A+B
#include <stdio.h>

int main(){
    int T, i, a,b;

    scanf("%d",&T);

    for(i=0;i<T;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }

    return 0;
}