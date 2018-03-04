#include <stdio.h>

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		int i;
		int max, max2,pos,pos2;
		scanf("%d",&max);
		pos = 1;
		scanf("%d",&max2);
		pos2 = 2;
		if(max2 > max){
			int aux = max;
			max= max2;
			max2 = aux;
			pos2 = 1;
			pos = 2;
		}
		
		for(i = 3;i<=n;i++){
			int v;
			scanf("%d",&v);			
			if(v > max){				
				max2 = max;
				pos2 = pos;
				max = v;
				pos = i;
			}else if(v < max && v > max2){
				max2 = v;
				pos2 = i;
			}
		}
		printf("%d\n",pos2);
	}
	return 0;
}
