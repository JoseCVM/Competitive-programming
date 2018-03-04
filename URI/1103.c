#include <stdio.h>

int main(){
	int x, y, a,b;
	while(1){
		scanf("%d %d %d %d",&x,&y,&a,&b);
		if(x == y && y == a && a == b && b == 0) break;
		int ini, fim;
		if(x == 0) x = 24;
		if(a == 0) a = 24;
		if(x > a || (x == a && y > b)){
			a += 24;
		}
		ini = x*60+y;
		fim = a*60+b;
		printf("%d\n",(fim-ini));
	}
	return 0;
}
