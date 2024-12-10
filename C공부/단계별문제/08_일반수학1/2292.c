//벌집
#include <stdio.h>

int main(){
    int N, i, start = 0, end = 1;

    scanf("%d",&N);

    for(i=6;;i+=6){
        if(start<=N&&N<=end){
            printf("%d",i/6);
            break;
        }
        start = end;
        end += i;
    }
    
    return 0;
}