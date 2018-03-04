#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int h[500] = {0};
		int max = -1;
		int n, i, j;
		scanf("%d",&n);
		for(i = 0;i<n;i++){
			int val;
			scanf("%d",&val);
			h[val]++;
		}
		for(i = 0;i<235;i++){
			if(h[i]>0){
				printf("%d",i);
				h[i]--;
				break;
			}			
		}
		for(i = 0;i<235;i++){
			for(j = 0;j<h[i];j++){
				printf(" %d",i);
			}
		}
		printf("\n");
	}
	return 0;
}
