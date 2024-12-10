//알파벳 찾기
#include <stdio.h>
#include <string.h>

int main(){
    char word[101];
    int alphabet[26] = {0,}, i,j, len;

    for(i=0; i<26; i++) alphabet[i] = -1;

    gets(word);
    len = strlen(word);

    for(i=0;i<len;i++){
        if(alphabet[word[i]-'a']==-1)alphabet[word[i]-'a'] = i;
        else continue; //생각해보니깐 이 문장은 필요 없네
    }

    for(i=0;i<26;i++)printf("%d ",alphabet[i]);

    return 0;
}