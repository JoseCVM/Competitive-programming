#include <stdio.h>

int main(){
	int t, i;
	scanf("%d",&t);
	for(i = 1;i<=t;i++){
		int n, a, j;
		scanf("%d",&n);
		a = n/2;
		for(j = 0;j<n;j++){
			int val;
			scanf("%d",&val);
			if(j == a) printf("Case %d: %d\n",i,val);
		}
	}
	return 0;
}
