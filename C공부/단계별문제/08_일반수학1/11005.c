//진법 변환2
#include <stdio.h>
#include <math.h>

int main(){
    const char num[36] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n, b, i = 0;

    scanf("%d %d",&n,&b);

    while(1){
        if(pow(b,i)>n) break;
        else i++;
    }
    i--;

    while(i>=0){
        printf("%c",num[n/(int)pow(b,i)]);
        n %= (int)pow(b,i);
        i--;
    }

    return 0;
}