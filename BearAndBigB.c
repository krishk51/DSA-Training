#include<stdio.h>
int main(){
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    if (1 <= a && a <= b && b <= 10){
    while (a<=b){
        a*=3;
        b*=2;
        count++;
    }    
    }
    printf("%d",count);
    return 0;
    
}