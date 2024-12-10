//달팽이는 올라가고 싶다
#include <stdio.h>

int main(){
    int A, B, V, t;

    scanf("%d %d %d",&A,&B,&V);

    t = (V-B) % (A-B)==0?(V-B) / (A-B):(V-B) / (A-B) + 1;

    printf("%d",t);

    return 0;
}