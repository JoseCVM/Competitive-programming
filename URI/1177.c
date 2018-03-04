#include <stdio.h>

int main(){
	int t, k;
	int i;
	k = 0;
	scanf("%d",&t);
	
	for(i = 0;i<1000;i++){
		printf("N[%d] = %d\n",i,k);
		k++;
		if(k == t) k = 0;
	}
	return 0;
}
