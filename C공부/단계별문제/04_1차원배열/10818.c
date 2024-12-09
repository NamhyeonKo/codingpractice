//최소, 최대
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, max = -1000000, min = 1000000;
    int *arr = NULL;

    scanf("%d",&N);

    arr = malloc(N*sizeof(int));

    for(i=0; i<N; i++) scanf("%d",arr+i);

    for(i=0; i<N; i++) {
        if(*(arr+i)<=min) min = *(arr+i);
        if(*(arr+i)>=max) max = *(arr+i);
    }

    printf("%d %d",min,max);

    return 0;
}