#include <stdio.h>

int main(){
	int n, m;
	while(1){
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0) break;
		int i, v[10000] = {0}, pen = 0;
		for(i = 0;i<m;i++){
			int val;
			scanf("%d",&val);
			v[val]++;
			if(v[val] == 2) pen++;
		}
		printf("%d\n",pen);
	}
	return 0;
}
