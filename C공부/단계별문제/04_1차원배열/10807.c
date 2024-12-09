//개수 세기
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = NULL;
    int N, V, i, cnt = 0;

    scanf("%d", &N);
    arr = malloc(sizeof(int)*N);

    for(i=0; i<N; i++) scanf("%d", arr+i);
    scanf("%d",&V);

    for(i=0; i<N; i++) if(arr[i]==V)cnt++;

    printf("%d", cnt);

    return 0;
}