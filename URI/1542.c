#include <stdio.h>

int main(){
	int q,d,p;
	while(1){
		scanf("%d",&q);
		if(q == 0) break;
		scanf("%d %d",&d,&p);
		int r = (d*p*q)/(p-q);		
		if(r > 1) printf("%d paginas\n",r);
		else printf("%d pagina\n",r);
	}
	return 0;
}
