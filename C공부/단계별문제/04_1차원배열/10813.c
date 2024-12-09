//공 바꾸기
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, M, i,j, x,y, tmp;
    int *arr = NULL;

    scanf("%d %d",&N,&M);
    arr = (int*) calloc(sizeof(int),N);

    for (x=0; x<N; x++) arr[x] = x+1;

    for (x=0;x<M;x++){
        scanf("%d %d",&i,&j);
        tmp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = tmp;
    }

    for (x=0;x<N;x++) printf("%d ",arr[x]);

    return 0;
}