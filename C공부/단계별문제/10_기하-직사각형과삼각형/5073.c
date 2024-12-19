//삼각형과 세 변
#include <stdio.h>

int main(){
    int len[3], max_i, sum,i;

    while(1){
        sum = 0;
        max_i = 0;
        scanf("%d %d %d",&len[0],&len[1],&len[2]);
        if(len[0]==0&&len[1]==0&&len[2]==0) break;

        for(i=0;i<3;i++) if (len[i]>len[max_i]) max_i=i;
        for(i=0;i<3;i++) if(i!=max_i) sum +=len[i];
        
        if(sum<=len[max_i]) printf("Invalid\n");
        else if(len[0]==len[1]&&len[1]==len[2]) printf("Equilateral\n");
        else if(len[0]==len[1]||len[1]==len[2]||len[2]==len[0]) printf("Isosceles\n");
        else printf("Scalene\n");
    }

    return 0;
}