#include <stdio.h>

int main(){
	int b,n;
	while(1){
		scanf("%d %d",&b,&n);
		if(b ==0 && n ==0) break;
		int bancos[10010] = {0};
		int r,d,c,v,i;
		for(i = 1;i<=b;i++){
			scanf("%d",&r);
			 bancos[i] = r;
		}
		for(i = 0;i<n;i++){
			scanf("%d %d %d",&d,&c,&v);
			bancos[d] -= v;
			bancos[c] += v;
		}
		int flag = 1;
		for(i = 1;i<=b;i++){
			if( bancos[i] < 0) flag = 0;
		}
		if(flag == 0) printf("N\n");
		else printf("S\n");
	}
	return 0;
}
