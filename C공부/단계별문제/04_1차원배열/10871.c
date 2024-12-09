//X보다 작은 수
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *A = NULL;
    int N, X, i;

    scanf("%d %d", &N, &X);
    A = malloc(N*sizeof(int));
    
    for (i=0; i<N; i++) scanf("%d",A+i);

    for (i=0; i<N; i++) if (A[i]<X) printf("%d ",A[i]);

    return 0;
}