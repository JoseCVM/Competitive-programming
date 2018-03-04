#include <stdio.h>

int main(){
	int x, y, a,b;
	while(1){
		scanf("%d %d %d %d",&x,&y,&a,&b);
		if(x == y && y == a && a == b && b == 0) break;
		if(x == a && y == b) printf("0\n");
		else if(x-a == y - b || abs(x-a) == abs(y-b) || x == a || y == b) printf("1\n");
		else printf("2\n");
	}
	return 0;
}
