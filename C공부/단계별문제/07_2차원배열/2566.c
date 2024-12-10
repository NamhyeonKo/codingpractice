//최댓값
#include <stdio.h>

int main(){
    int arr[9][9], i,j, max_i=0,max_j=0;
    
    for (i=0;i<9;i++) for (j=0;j<9;j++) {
        scanf("%d",&arr[i][j]);
        if(arr[i][j]>arr[max_i][max_j]){
            max_i = i;
            max_j = j;
        }
    }

    printf("%d\n%d %d",arr[max_i][max_j],max_i+1,max_j+1);

    return 0;
}