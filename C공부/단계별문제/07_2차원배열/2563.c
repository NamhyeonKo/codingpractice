//색종이
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,k, x,y, n, sum = 0;
    int arr[100][100] = {0,};

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);

        for(j=0;j<10;j++) for(k=0;k<10;k++) arr[x+j-1][y+k-1] = 1;
    }

    for(i=0;i<100;i++) for(j=0;j<100;j++) if(arr[i][j]==1) sum++;

    printf("%d",sum);

    return 0;
}