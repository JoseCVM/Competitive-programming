#include <stdio.h>

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		int v[10010];
		int i;
		int p =0;
		scanf("%d %d",&v[0],&v[1]);
		for(i = 2;i<n;i++){
			scanf("%d",&v[i]);
			if(v[i-1] > v[i] && v[i-1] > v[i-2]){
				p++;
			}else if(v[i-1] < v[i] && v[i-1] < v[i-2]){
				p++;
			}
			
		}
		if(v[0] < v[1] && v[0] < v[n-1]) p++;
		if(v[n-1] < v[n-2] && v[n-1] < v[0]) p++;
		if(v[0] > v[1] && v[0] > v[n-1]) p++;
		if(v[n-1] > v[n-2] && v[n-1] > v[0]) p++;
		printf("%d\n",p);
	}
	return 0;
}
