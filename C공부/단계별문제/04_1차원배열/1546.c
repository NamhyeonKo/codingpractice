//평균
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *score = NULL;
    int N, i, M = 0;
    float reavg = 0;

    scanf("%d", &N);
    score = (int*) malloc(sizeof(int)*N);

    for(i=0; i<N; i++){
        scanf("%d",&score[i]);
        if(score[i]>M) M = score[i];
    }

    for(i=0; i<N; i++) reavg += (float) score[i]/M;

    reavg /= N;

    printf("%f",reavg*100);

    return 0;
}