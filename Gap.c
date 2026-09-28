#include<stdio.h>
int main() {
    int n, sum=0, product=1,digit;
    scanf("%d",&n);
    while (n!=0){
        digit=n%10;
        product*=digit;
        sum+=digit;
        n=n/10;
    }
    digit=product-sum;
    printf("%d",digit);
}