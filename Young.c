#include<stdio.h>
int main(){
    int n, Sum1=0, Sum2=0, Sum3=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        Sum1+=x;
        Sum2+=y;
        Sum3+=z;
    }
    if (Sum1==0 && Sum2==0 && Sum3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}