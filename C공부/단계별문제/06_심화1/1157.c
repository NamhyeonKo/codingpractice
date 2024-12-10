//단어 공부
#include <stdio.h>
#include <string.h>

int main(){
    int alpha[26] = {0,}, len, i, max = 0, tmp, max_i;
    char word[1000001];

    gets(word);
    len = strlen(word);

    for(i = 0; i < len; i++){
        if(word[i]>='a'&&word[i]<='z') alpha[word[i]-'a']++;
        else if(word[i]>='A'&&word[i]<='Z') alpha[word[i]-'A']++;
        else continue;
    }

    for(i = 0;i<26;i++){
        if(alpha[i]>max){
            max = alpha[i];
            tmp = 0;
            max_i = i;
        }
        else if(alpha[i]==max) tmp = 1;
    }

    if(tmp == 0) printf("%c",'A'+max_i);
    else printf("?");

    return 0;
}