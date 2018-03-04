#include <stdio.h>

int main(){
	int v, n, i, in = 0;
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		scanf("%d",&v);
		if(v >= 10 && v<=20) in++;
	}
	printf("%d in\n%d out\n",in,n-in);
	return 0;
}
