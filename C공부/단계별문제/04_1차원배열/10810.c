//공 넣기
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, M, i,j,k, x,y;
    int *arr = NULL;

    scanf("%d %d",&N,&M);
    arr = (int*) calloc(sizeof(int),N);

    for (x=0;x<M;x++){
        scanf("%d %d %d",&i,&j,&k);
        for (y=i-1;y<j;y++) arr[y]=k;
    }

    for (x=0;x<N;x++) printf("%d ",arr[x]);

    return 0;
}