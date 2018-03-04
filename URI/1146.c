#include <stdio.h>

int main(){
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0) break;
		int i;
		printf("1");
		for(i = 2;i<=n;i++) printf(" %d", i);
		printf("\n");
	}
	return 0;
}
