//크로아티아 알파벳
#include <stdio.h>
#include <string.h>

int main(){
    char word[101], *p = NULL;
    int len;

    gets(word);
    len = strlen(word);

    for(p=word;*p;p++){
        if((p[0] == 'c'&& p[1] == '=')||(p[0] == 'c'&& p[1] == '-')){
            len -= 1;
            p++;
        }
        else if((p[0] == 'd'&& p[1] == 'z' && p[2] == '=')){
            len -= 2;
            p+=2;
        }
        else if(p[0] == 'd'&& p[1] == '-'){
            len -= 1;
            p++;
        }
        else if(p[0] == 'l'&& p[1] == 'j'){
            len -= 1;
            p++;
        }
        else if(p[0] == 'n'&& p[1] == 'j'){
            len -= 1;
            p++;
        }
        else if(p[0] == 's'&& p[1] == '='){
            len -= 1;
            p++;
        }
        else if(p[0] == 'z'&& p[1] == '='){
            len -= 1;
            p++;
        }
        else continue;
    }

    printf("%d",len);

    return 0;
}