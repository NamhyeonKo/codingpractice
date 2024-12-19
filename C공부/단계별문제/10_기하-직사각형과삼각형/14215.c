//세 막대
#include <stdio.h>

int main(){
    int len[3], max_i = 0, sum = 0, i;

    scanf("%d %d %d",&len[0],&len[1],&len[2]);

    for(i=0;i<3;i++) if (len[i]>len[max_i]) max_i=i;
    for(i=0;i<3;i++) if(i!=max_i) sum +=len[i];

    if(sum<=len[max_i]) printf("%d",(sum*2)-1);
    else printf("%d",sum+len[max_i]);

    return 0;
}