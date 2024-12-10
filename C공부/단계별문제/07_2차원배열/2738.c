//행렬 덧셈
#include <stdio.h>
#include <stdlib.h>

int main(){
    int **arr1 = NULL, **arr2 = NULL;
    int N,M, i,j;

    scanf("%d %d",&N,&M);

    arr1 = (int**) malloc(N*sizeof(int*));
    for (i=0;i<N;i++) arr1[i] = (int*) malloc(M*sizeof(int));

    arr2 = (int**) malloc(N*sizeof(int*));
    for (i=0;i<N;i++) arr2[i] = (int*) malloc(M*sizeof(int));

    for (i=0;i<N;i++) for(j=0;j<M;j++) scanf("%d",&arr1[i][j]);
    for (i=0;i<N;i++) for(j=0;j<M;j++) scanf("%d",&arr2[i][j]);

    for (i=0;i<N;i++) {
        for(j=0;j<M;j++) printf("%d ",arr1[i][j]+arr2[i][j]);
        printf("\n");
    }
    return 0;
}