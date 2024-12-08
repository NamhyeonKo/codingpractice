//주사위 세개
#include <stdio.h>

int main(){
    int a,b,c, w = 0;

    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&b==c) w = 10000 + (a*1000);
    else if(a==b) w = 1000 + (a*100);
    else if(b==c) w = 1000 + (b*100);
    else if(c==a) w = 1000 + (c*100);
//    else{
//        if(a>b&&a>c) w = a * 100;
//        else if(b>c&&b>a) w = b * 100;
//        else w = c * 100;
//    }
    else w = (a>b&&a>c?a:b>a&&b>c?b:c)*100;

    printf("%d",w);

    return 0;
}