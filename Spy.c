#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
            int arr[n];
            for (int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            int result=0;
            result =arr[0]^arr[1]^arr[2];
            
            for (int i=0;i<n;i++){
                if (arr[i]==result){
                    printf("\n%d",i+1);
                    break;
                }
            }
        }
    return 0;
}
    
