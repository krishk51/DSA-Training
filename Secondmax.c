#include <stdio.h>

int main() {
	
	int n ,second;
	scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z); 
        
    if ((x > y && x < z) || (x < y && x > z))
        second = x;
    else if ((y > x && y < z) || (y < x && y > z))
        second = y;
    else
        second = z;

    printf("\n%d", second);
        
    }

}

