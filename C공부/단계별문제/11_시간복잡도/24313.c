//알고리즘 수업 - 점근적 표기 1
#include <stdio.h>

int main(){
    int a1,a0,c,n0;
    
    scanf("%d %d\n%d\n%d",&a1,&a0,&c,&n0);

    if(a1>c) printf("0");
    else if(a1==c) {
        if(a0<=0) printf("1");
        else printf("0");
    }
    else if((a1-c)*n0+a0<=0) printf("1");
    else printf("0");

    return 0;
}