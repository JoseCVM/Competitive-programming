#include <stdio.h>

int main(){
	int d, vf, vg;
	while(scanf("%d %d %d",&d,&vf,&vg) != EOF){
		int f;
		double c = sqrt(d*d + 144);
		double tg = (double)c/vg;
		double tf = (double)12/vf;
		if(tg >= tf) printf("S\n");
		else printf("N\n");		
	}
	return 0;
}
