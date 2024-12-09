//과제 안 내신 분..?
#include <stdio.h>
#include <stdbool.h>

int main(){
    bool stu[30] = {false,};
    int i, n;

    for(i=0;i<28;i++){
        scanf("%d",&n);
        stu[n-1] = true;
    }

    for(i=0;i<30;i++) if(stu[i]==false) printf("%d\n",i+1);
    
    return 0;
}