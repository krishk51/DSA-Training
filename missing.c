#include<stdio.h>
int main(){
    int numsSize,total1=0,total2=0;
    scanf("%d",&numsSize);
    int nums[numsSize];
    for (int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
        total1=total1+nums[i];
    }
    for (int i=1;i<=numsSize;i++){
        total2=total2+numsSize;
    
    }
    int miss=total2-total1;
    printf("%d",miss);
    return 0;
}