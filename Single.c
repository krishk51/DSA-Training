#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for (int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    int result =0;
    for (int i=0;i<t;i++){
        result=result^arr[i];
    }
    printf("%d",result);
    return 0;
}