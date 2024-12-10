//숫자의 합
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum = 0, i;
    char *num = NULL;

    scanf("%d\n",&n);
    num = (char *)malloc((n+1)*sizeof(char));

    gets(num);

    for(i=0; i<n; i++){
        sum += num[i] - 48; // -'0'이랑 같음
    }

    printf("%d",sum);

    return 0;
}