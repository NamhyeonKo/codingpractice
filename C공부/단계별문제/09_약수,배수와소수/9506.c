//약수들의 합
#include <stdio.h>

int main(){
    int N, i, s, tmp;

    while(1){
        scanf("%d",&N);
        s = 0;
        if(N==-1)break;
        
        for(i=1;i<N;i++) if(N%i==0) {
            s += i;
            tmp = i;
        }

        if(s!=N){
            printf("%d is NOT perfect.\n",N);
        }
        else{
            printf("%d = ",s);
            for(i=1;i<tmp;i++) if(N%i==0) printf("%d + ",i);
            printf("%d\n",tmp);
        }
    }

    return 0;
}