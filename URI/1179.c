#include <stdio.h>

int main(){
	int i, p, np;
	p = np = 0;
	int par[20], impar[20];
	for(i = 0;i<15;i++){
		int val;
		scanf("%d",&val);
		if(val%2 == 0){
			par[p] = val;
			p++;
			if(p == 5){
				printf("par[0] = %d\npar[1] = %d\npar[2] = %d\npar[3] = %d\npar[4] = %d\n",par[0],par[1],par[2],par[3],par[4]);
				p = 0;
			}
		}else{
			impar[np] = val;
			np++;				
			if(np == 5){
				printf("impar[0] = %d\nimpar[1] = %d\nimpar[2] = %d\nimpar[3] = %d\nimpar[4] = %d\n",impar[0],impar[1],impar[2],impar[3],impar[4]);
				np = 0;
			}
		}
	}
	for(i = 0;i<np;i++) printf("impar[%d] = %d\n",i,impar[i]);
	for(i = 0;i<p;i++) printf("par[%d] = %d\n",i,par[i]);
	return 0;
}
