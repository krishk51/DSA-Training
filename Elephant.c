#include<stdio.h>
int main(){
    int n, count=0;
    scanf("%d",&n);
    if (1 <= n && n <= 1000000) {
         if (n%5==0){
                printf("%d",n/5);
                
            }
         else{
                printf("%d",n/5+1);
            

        }
        

    }
    return 0;
}