//직사각형에서 탈출
#include <stdio.h>

int main(){
    int x,y,w,h;
    int i, num[4], min;

    scanf("%d %d %d %d",&x,&y,&w,&h);

    min = num[0] = x;
    num[1] = y;
    num[2] = w-x;
    num[3] = h-y;

    for(i=0;i<4;i++) if(num[i]<min) min=num[i];

    printf("%d",min);

    return 0;
}