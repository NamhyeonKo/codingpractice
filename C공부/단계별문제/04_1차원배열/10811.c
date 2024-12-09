//바구니 뒤집기
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, M, i,j, x,y,z;
    int *arr = NULL, *tmp = NULL;

    scanf("%d %d",&N,&M);
    arr = (int*) calloc(sizeof(int),N);
    tmp = (int*) calloc(sizeof(int),N);

    for (x=0; x<N; x++) arr[x] = x+1;

    for (x=0;x<M;x++){
        scanf("%d %d",&i,&j);
        for(z=i-1;z<j;z++) tmp[i+j-z-2] = arr[z];
        for(z=i-1;z<j;z++) arr[z] = tmp[z];
    }

    for (x=0;x<N;x++) printf("%d ",arr[x]);

    return 0;
}