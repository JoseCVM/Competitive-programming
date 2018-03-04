#include <stdio.h>

int main(){
	while(1){
		double x, y;
		while(1){
			scanf("%lf",&x);
			if(x >= 0 && x <= 10) break;
			printf("nota invalida\n");
		}
		while(1){
			scanf("%lf",&y);
			if(y >= 0 && y <= 10) break;
			printf("nota invalida\n");
		}
		printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n",(x+y)/2);
		int c;
		while(1){				
			scanf("%d",&c);
			if(c == 1 ||c == 2) break;
			printf("novo calculo (1-sim 2-nao)\n");
		}
		if(c == 2) break;
	}
	return 0;
}
