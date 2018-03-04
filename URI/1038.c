#include <stdio.h>

int main(){
	double t[5] = {4,4.5,5,2,1.5};
	int c, n;
	scanf("%d %d",&c,&n);
	--c;
	printf("Total: R$ %.2lf\n",t[c]*n);
	return 0;
}
