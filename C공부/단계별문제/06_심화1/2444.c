//별 찍기-7
#include <stdio.h>

int main(){
    int n, i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=n-i-1;j>0;j--) printf(" ");
        for(j=0;j<i*2+1;j++) printf("*");
        printf("\n");
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<i+1;j++) printf(" ");
        for(j=0;j<(n-i)*2-3;j++) printf("*");
        printf("\n");
    }

    return 0;
}