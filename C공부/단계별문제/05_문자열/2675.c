//문자열 반복
#include <stdio.h>
#include <string.h>

int main(){
    int t, n, i,j,k;
    char word[21];

    scanf("%d\n",&t);

    for(i=0;i<t;i++){
        scanf("%d ",&n);
        gets(word);

        for(j=0;j<strlen(word);j++) for(k=0;k<n;k++) printf("%c",word[j]);
        printf("\n");
    }

    return 0;
}