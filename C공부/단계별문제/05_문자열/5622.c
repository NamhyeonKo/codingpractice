//다이얼
#include <stdio.h>
#include <string.h>

int main(){
    const int alpha[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int len, i, t = 0;
    char word[16];

    gets(word);
    len = strlen(word);

    for(i=0; i<len; i++) t += alpha[word[i] - 'A'];
    t += len;

    printf("%d\n", t);

    return 0;
}