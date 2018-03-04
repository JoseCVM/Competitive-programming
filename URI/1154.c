#include <stdio.h>

int main(){
	int n, s = 0, t = 0;
	while(1){
		scanf("%d",&n);
		if(n < 0) break;
		s += n;
		t++;
	}
	printf("%.2lf\n",(double)s/t);
	return 0;
}
