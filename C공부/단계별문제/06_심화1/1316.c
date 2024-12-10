//그룹 단어 체커
#include <stdio.h>
#include <string.h>

int main(){
    int n, len, i,j, cnt = 0, alpha[26];
    char word[101];

    scanf("%d\n",&n);

    for(i=0; i<n; i++){
        for(j=0;j<26;j++) alpha[j] = 0;
        gets(word);
        len = strlen(word);

        for(j=0; j<len; j++){
            if(alpha[word[j]-'a']==0) alpha[word[j]-'a'] = 1;
            else if((alpha[word[j]-'a'] == 1) && (word[j-1]!=word[j])){
                cnt--;
                break;
            }
            else continue;
        }
        cnt++;
    }

    printf("%d",cnt);

    return 0;
}