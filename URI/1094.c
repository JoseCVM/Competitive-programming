#include <stdio.h>

int main(){
	int n;
	int t = 0;
	int c = 0;
	int r = 0;
	int s = 0;
	scanf("%d",&n);
	while(n--){
		int v;
		char a;
		scanf("%d %c",&v,&a);
		t += v;
		if(a == 'C') c+=v;
		if(a == 'R') r+=v;
		if(a == 'S') s+=v;
	}
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %\nPercentual de ratos: %.2lf %\nPercentual de sapos: %.2lf %\n",t,c,r,s,(double)(c*100)/t,(double)(r*100)/t,(double)(s*100)/t);
}
