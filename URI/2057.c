#include <stdio.h>

int main(){
	int p, c, t;
	scanf("%d %d %d",&p,&c,&t);
	int res = (p + c + t)%24;
	if(res < 0) res = 24 + res;
	printf("%d\n",res);
	return 0;
}
