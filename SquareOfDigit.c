#include<stdio.h>
#include<math.h>
int main(){
    int temp,n,digit,power=0,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        digit=temp%10;
        power++;
        temp=temp/10;
        
    }
    temp=n;
    while(temp!=0){
        digit=temp%10;
        sum+=(int)pow(digit,power);
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}