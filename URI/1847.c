#include <stdio.h>

int main(){
	int a, b, c;
	int h= 0;
	scanf("%d %d %d",&a,&b,&c);
	if(b-a < c - b || (b-a == c - b && b-a > 0)){
		h = 1;
	}
	if(h == 1) printf(":)\n");
	else printf(":(\n");
	return 0;
}
