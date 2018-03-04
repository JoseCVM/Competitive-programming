#include <stdio.h>

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		int i;
		int jn, mr;
		jn = mr = 0;
		for(i = 0;i<n;i++){
			int v;
			scanf("%d",&v);
			if(v != 0) jn++;
			else mr++;
		}
		printf("Mary won %d times and John won %d times\n",mr,jn);
	}
}
