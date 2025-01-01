//체스판 다시 칠하기
//다시풀기!!!!!!!!!!!
#include <stdio.h>
#include <stdlib.h>

int main(){
    int M,N, i,j,a,b, min_cnt = 64, cnt1, cnt2, cnt;
    char chess[50][50];

    scanf("%d %d",&M,&N);
    getchar();

    for(i=0;i<M;i++) {
        gets(chess[i]);
    }

    for(a=0;a<=M-8;a++){
        for(b=0;b<=N-8;b++){
            cnt1 = 0;
            cnt2 = 0;
            for(i=a;i<a+8;i++) for(j=b;j<b+8;j++){
                if(((i-a+j-b)%2==0)&&(chess[i][j]!='B')) cnt1++;
                else if(((i-a+j-b)%2==1)&&(chess[i][j]!='W')) cnt1++;
            }
            for(i=a;i<a+8;i++) for(j=b;j<b+8;j++){
                if(((i-a+j-b)%2==0)&&(chess[i][j]!='W')) cnt2++;
                else if(((i-a+j-b)%2==1)&&(chess[i][j]!='B')) cnt2++;
            }  
            cnt = cnt1<cnt2? cnt1:cnt2;
            if(cnt<min_cnt) min_cnt = cnt;
        }
    }

    printf("%d",min_cnt);

    return 0;
}