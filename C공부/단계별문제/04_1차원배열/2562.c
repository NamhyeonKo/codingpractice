//최댓값
#include <stdio.h>

int main(){
    const int N = 9;
    int arr[N], i, max_index = 0;

    for(i=0;i<N;i++)scanf("%d",arr+i);

    for(i=0;i<N;i++) if(arr[i]>=arr[max_index]) max_index = i;

    printf("%d\n%d",arr[max_index],max_index+1);

    return 0;
}