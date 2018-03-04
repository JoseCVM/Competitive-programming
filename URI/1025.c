#include <stdio.h>

int main(){
	int n, q;
	int k = 0;
	while(1){
		k++;
		scanf("%d %d",&n,&q);
		if(n == q && q == 0) break;
		printf("CASE# %d:\n",k);
		int v[10010] = {0}, i;
		int pos[10010] = {0};
		for(i = 0;i<n;i++){
			int val;
			scanf("%d",&val);
			v[val]++;
		}
		int cnt = 0;
		for(i = 0;i<10010;i++){
			if(v[i] != 0){
				pos[i] = cnt;
				cnt += v[i];
			}else{
				pos[i] = -1;
			}
		}
		for(i = 0;i<q;i++){
			int val;
			scanf("%d",&val);
			if(pos[val] != -1)
				printf("%d found at %d\n",val,pos[val]+1);
			else 
				printf("%d not found\n",val);
		}
	}
	return 0;
}
