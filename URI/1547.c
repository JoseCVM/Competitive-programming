#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int qt, s;
		scanf("%d %d",&qt,&s);
		int i;
		int flag = 0;
		int best, pbest;
		scanf("%d",&best);
		pbest = 1;
		if(abs(s - best) ==0){
			printf("%d\n",1);
			flag = 1;
		}
		for(i = 2;i<=qt;i++){
			int val;
			scanf("%d",&val);
			if(abs(s-val) < abs(s - best)){
				best = val;		
				pbest = i;		
				if(abs(s - best) == 0 && flag==0){
					printf("%d\n",i);
					flag = 1;
				}
			}
		}
		if(flag == 0){
			printf("%d\n",pbest);
		}
	}
	return 0;
}
