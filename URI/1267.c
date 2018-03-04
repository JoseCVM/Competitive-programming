#include <stdio.h>

int main(){
	int a, b;
	while(1){
		scanf("%d %d",&a,&b);
		if(a == 0 && b == 0) break;
		int va[110] = {0};
		int i,j, y = 0;
		for(i = 0;i<b;i++){
			for(j = 0;j<a;j++){
				int val;
				scanf("%d",&val);
				va[j] += val;
				if(va[j]==b) y = 1; 
			}
		}
		if(y) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
