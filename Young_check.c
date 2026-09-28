#include<stdio.h>
int main(){
    int n , sum=0;
    scanf("%d",&n);
    int arr[n][3];
    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
             sum=sum+arr[i][j];
            }
        }
    if (sum==0){
        printf("Yes");
    }
    else{
    printf("No");
    }
}
