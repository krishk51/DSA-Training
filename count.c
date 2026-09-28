#include<stdio.h>
int main(){
    int n ,even=0,odd=0,digit ;
scanf("%d",&n);

do {
    digit=n%10;
    if (digit%2==0){
        even++;

    }else {
        odd++;

}n=n/10;
    

}while(n!=0);
printf("Even=%d\n",even);
printf("Odd=%d\n",odd);
return 0;


}
