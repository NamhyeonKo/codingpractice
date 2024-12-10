//분수찾기
#include <stdio.h>

int main(){
    int X, i = 1,j = 1, c = 1, s = 1;

    scanf("%d",&X);

    while(1){
        if(c == X) break;
        if(j == 1){
            s++;
            i = 1;
            j = s;
        }
        else{
            i++;
            j--;
        }
        c++;
    }

    if(s%2==0) printf("%d/%d",i,j);
    else printf("%d/%d",j,i);

    return 0;
}