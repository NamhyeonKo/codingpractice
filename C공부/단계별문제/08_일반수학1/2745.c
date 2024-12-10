//진법 변환
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int i, b, len, ten = 0;
    char num[31];

    scanf("%s %d",num, &b);
    len = strlen(num);

    for(i=0;i<len;i++){
        ten += (num[len-i-1]>='0'&&num[len-i-1]<='9'?num[len-i-1]-'0':num[len-i-1]-'A'+10)*pow(b,i);
    }

    printf("%d",ten);
    
    return 0;
}