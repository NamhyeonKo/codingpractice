//세로읽기
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char **word = NULL;
    int i,j;

    word = (char**)calloc(5,sizeof(char*));
    for (i=0;i<5;i++) word[i] = (char*)calloc(16,sizeof(char));

    for(i=0;i<5;i++) gets(word[i]);

    for(i=0;i<15;i++){
        for(j=0;j<5;j++){
            if(word[j][i]) printf("%c",word[j][i]);
            else continue;
        }
    }

    return 0;
}