//너의 평점은
#include <stdio.h>
#include <string.h>

int main(){
    int i;
    float sum = 0.0, sum_gt = 0.0, gt, gs;
    char subname[51], grade[3];

    for(i=0;i<20;i++){
        scanf("%s %f %s",subname,&gt,grade);

        if(grade[0]=='P') continue;

        if(grade[0]=='A') gs = 4.0;
        else if(grade[0]=='B') gs = 3.0;
        else if(grade[0]=='C') gs = 2.0;
        else if(grade[0]=='D') gs = 1.0;
        else if(grade[0]=='F') gs = 0.0;
        
        if(grade[1]=='+') gs += 0.5;

        sum += gs * gt;
        sum_gt += gt;
    }

    printf("%f",sum/sum_gt);

    return 0;
}