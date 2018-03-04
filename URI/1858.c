#include <stdio.h>

int main(){
	int n,i, min, pmin;
	scanf("%d",&n);
	scanf("%d",&min);
	pmin = 1;
	for(i = 2;i<=n;i++){
		int val;
		scanf("%d",&val);
		if(val < min){
			min = val;
			pmin = i;
		}
	}
	printf("%d\n",pmin);
	return 0;
}
