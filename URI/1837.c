#include <stdio.h>
#include <math.h>
int main(){
	
	int a, b;
	int q, r;
	scanf("%d %d",&a,&b);
	if((a > 0 && b > 0) || (b > 0 && a < 0))
		q = floor((double)a/b);
	else
		q = ceil((double)a/b);
	r = a - b*q;
	printf("%d %d\n",q,r);
	return 0;
}
