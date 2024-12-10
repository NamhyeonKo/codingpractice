//상수
#include <stdio.h>
#include <string.h>

int main(){
    char num1[4], num2[4];
    int i, n1 = 0 , n2 = 0;

    scanf("%s %s",num1,num2);

    for(i=0;i<3;i++){
        n1 += num1[2-i] - '0';
        n2 += num2[2-i] - '0';
        n1 *= 10;
        n2 *= 10;
    }
    n1 /= 10;
    n2 /= 10;

    printf("%d",n1>n2?n1:n2);

    return 0;
}