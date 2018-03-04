#include <stdio.h>

int main(){
	int n, m;
	while(1){
		scanf("%d %d",&n,&m);
		if(n == 0 && m ==0) break;
		int restodos = 0, resnenhum = 0, todosres = 0, pelomenos = 0;
		int i, j;
		int prob[110] = {0};
		for(i = 0;i<n;i++){
			int resp = 0;
			int sj = 0;
			for(j = 0;j<m;j++){
				int v;
				scanf("%d",&v);
				prob[j]  += v;
				sj += v;
			}
			if(sj == m){
			//	printf("um\n");
				restodos = 1;
			}
			  
			if(sj == 0){
				resnenhum = 1;
		//	printf("dois\n");	
			} 
		}
		for(i = 0;i<m;i++){
			if(prob[i] == 0) {
			//	printf("tre\n");
				todosres = 1;
			}
			if(prob[i] == n){
			//	printf("quatr\n");
				pelomenos = 1;	
			} 
		}
		printf("%d\n",4-restodos-resnenhum-todosres-pelomenos);
	}
	return 0;
}
