#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d",&n);
    int arr[n];
    if (1<=n && n<=100){
        for (int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
    }
     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int count=0, mymoney=0;
    for (int i=0;i<n;i++){
        mymoney+=arr[i];
          count++;

        if (mymoney>(sum-mymoney)){
            break;
        }
         
        

    }
    printf("%d\n",count);
    
}