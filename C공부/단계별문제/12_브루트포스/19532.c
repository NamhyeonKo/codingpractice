//수학은 비대면강의입니다
#include <stdio.h>

int main(){
    int a,b,c,d,e,f, x,y;

    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

    x = (c*e - b*f) / (e*a - b*d);
    y = (d*c - a*f) / (d*b - a*e);

    printf("%d %d",x,y);

    return 0;
}