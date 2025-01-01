//블랙잭
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,M, *num = NULL, i,j,k, max_sum = 0;

    scanf("%d %d",&N,&M);
    num = (int*)malloc(N*sizeof(int));

    for(i=0;i<N;i++) scanf("%d",&num[i]);

    for(i=0;i<N-2;i++)
        for(j=i+1;j<N-1;j++)
            for(k=j+1;k<N;k++)
                if(num[i]+num[j]+num[k]>max_sum&&num[i]+num[j]+num[k]<=M)
                    max_sum = num[i]+num[j]+num[k];
    printf("%d",max_sum);

    return 0;
}