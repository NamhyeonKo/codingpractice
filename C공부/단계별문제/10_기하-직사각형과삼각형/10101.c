//삼각형 외우기
#include <stdio.h>

int main(){
    int a,b,c;

    scanf("%d\n%d\n%d",&a,&b,&c);

    if(a+b+c != 180) printf("Error");
    else if(a==b&&b==c) printf("Equilateral");
    else if(a==b||b==c||c==a) printf("Isosceles");
    else printf("Scalene");

    return 0;
}