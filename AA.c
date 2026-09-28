#include <stdio.h>

int main() {
	// your code goes here
	int x,y,k,gap;
	scanf("%d %d %d",&x,&y,&k);
	gap=x-y;
	if (gap<0){
	gap=-gap;
    }
	
	if(gap==k){
        printf("Yes");
    }
    else{
        printf("No");
    }

}

