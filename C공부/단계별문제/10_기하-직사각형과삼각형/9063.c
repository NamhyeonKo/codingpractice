//대지
#include <stdio.h>

int main(){
    int x,y, min_x = 10001, max_x = -10001, min_y = 10001, max_y = -10001;
    int N, i;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d %d",&x,&y);
        if(x<min_x) min_x = x;
        if(x>max_x) max_x = x;
        if(y<min_y) min_y = y;
        if(y>max_y) max_y = y;
    }

    printf("%d",(max_x-min_x)*(max_y-min_y));

    return 0;
}