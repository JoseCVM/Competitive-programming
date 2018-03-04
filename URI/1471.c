#include <stdio.h>

int main(){
	int n, r;
	while(scanf("%d %d",&n,&r) != EOF){
		int i, v[10010] = {0};
		for(i = 0;i<r;i++){
			int val;
			scanf("%d",&val);
			v[val] = 1;
		}
		int f = 1;
		for(i = 1;i<=n;i++){
			if(v[i] == 0){				
				printf("%d ",i);				
				f = 0;
			}
		}
		if(f == 1) printf("*");
		printf("\n");
	}
	return 0;
}
