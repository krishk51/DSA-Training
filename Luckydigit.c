#include <stdio.h>
int main (){
    int n,count=0,digit;
    scanf("%d", &n);
    do {
        digit=n%10;
        if (digit==7){
            count++;
            
        }
        n=n/10;
    } while (n>0);
    printf("%d", count);
    return 0;
}